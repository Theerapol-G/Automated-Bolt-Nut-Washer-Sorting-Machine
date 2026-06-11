#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#define NUM_SENSORS 13
int sensorPins[NUM_SENSORS] = {34, 35, 32, 33, 25, 26, 27, 14, 12, 13, 4, 15, 2};
boolean sensorStatus[NUM_SENSORS];
boolean prevSensorStatus[NUM_SENSORS];
int sensorCount[NUM_SENSORS] = {0};

// Function to read analog values and update sensor status
void readSensors(void* pvParameters) {
    while (1) {
        for (int i = 0; i < NUM_SENSORS; i++) {
            int sensorValue = analogRead(sensorPins[i]);
            if (sensorValue < 700) {
                sensorStatus[i] = true;
                if (!prevSensorStatus[i]) {
                    sensorCount[i]++;
                }
            } else {
                sensorStatus[i] = false;
            }
        }
        vTaskDelay(10 / portTICK_PERIOD_MS); // Adjust delay as needed
    }
}

// Function to process sensor data and print counts
void processSensorData(void* pvParameters) {
    while (1) {
        bool statusChanged = false;
        for (int i = 0; i < NUM_SENSORS; i++) {
            if (sensorStatus[i] != prevSensorStatus[i]) {
                statusChanged = true;
                break;
            }
        }

        if (statusChanged) {
            Serial.print("{");
            for (int i = 0; i < NUM_SENSORS; i++) {
                Serial.print(sensorCount[i]);
                if (i < NUM_SENSORS - 1) {
                    Serial.print(",");
                }
            }
            Serial.println("}");

            for (int i = 0; i < NUM_SENSORS; i++) {
                prevSensorStatus[i] = sensorStatus[i];
            }
        }
        vTaskDelay(10 / portTICK_PERIOD_MS); // Adjust delay as needed
    }
}

void setup() {
    Serial.begin(115200);

    // Initialize sensor pins
    for (int i = 0; i < NUM_SENSORS; i++) {
        pinMode(sensorPins[i], INPUT);
        sensorStatus[i] = false;
        prevSensorStatus[i] = false;
    }

    // Create tasks and assign them to cores
    xTaskCreatePinnedToCore(readSensors, "Read Sensors", 4096, NULL, 1, NULL, 0);
    xTaskCreatePinnedToCore(processSensorData, "Process Data", 4096, NULL, 1, NULL, 1);
}

void loop() {
    // Nothing to do here, tasks run on separate cores
}