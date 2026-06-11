#include <lvgl.h>
#include <TFT_eSPI.h>
#include <ui.h>
#include "config.h"
#include <CircularBuffer.h> // Include the circular buffer library
const int BUFFER_SIZE = 256; // Adjust the size as needed
CircularBuffer<char, BUFFER_SIZE> serialBuffer;

#define NUM_SENSORS 13
int sensorOut[NUM_SENSORS];
static const uint16_t screenWidth = 480;
static const uint16_t screenHeight = 320;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * screenHeight / 10];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char * buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif
/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}
lv_obj_t* ui_Label11 = NULL;
lv_obj_t* ui_Label14 = NULL;
lv_obj_t* ui_Label1 = NULL;
lv_obj_t* ui_Label12 = NULL;
lv_obj_t* ui_Label15 = NULL;
lv_obj_t* ui_Label16 = NULL;
lv_obj_t* ui_Label17 = NULL;
lv_obj_t* ui_Label18 = NULL;
lv_obj_t* ui_Label19 = NULL;
lv_obj_t* ui_Label7 = NULL;
lv_obj_t* ui_Label13 = NULL;
lv_obj_t* ui_Label20 = NULL;
lv_obj_t* ui_Label21 = NULL;

// Update LVGL UI with sensor data
void updateUI(int sensorOut[]) {
  // Delete existing labels
  if (ui_Label11 != NULL) {
    lv_obj_del(ui_Label11);
    ui_Label11 = NULL;
  }
  if (ui_Label14 != NULL) {
    lv_obj_del(ui_Label14);
    ui_Label14 = NULL;
  }
  if (ui_Label1 != NULL) {
    lv_obj_del(ui_Label1);
    ui_Label1 = NULL;
  }
  if (ui_Label12 != NULL) {
    lv_obj_del(ui_Label12);
    ui_Label12 = NULL;
  }
  if (ui_Label15 != NULL) {
    lv_obj_del(ui_Label15);
    ui_Label15 = NULL;
  }
  if (ui_Label16 != NULL) {
    lv_obj_del(ui_Label16);
    ui_Label16 = NULL;
  }
  if (ui_Label17 != NULL) {
    lv_obj_del(ui_Label17);
    ui_Label17 = NULL;
  }
  if (ui_Label18 != NULL) {
    lv_obj_del(ui_Label18);
    ui_Label18 = NULL;
  }
  if (ui_Label19 != NULL) {
    lv_obj_del(ui_Label19);
    ui_Label19 = NULL;
  }
  if (ui_Label7 != NULL) {
    lv_obj_del(ui_Label7);
    ui_Label7 = NULL;
  }
  if (ui_Label13 != NULL) {
    lv_obj_del(ui_Label13);
    ui_Label13 = NULL;
  }
  if (ui_Label20 != NULL) {
    lv_obj_del(ui_Label20);
    ui_Label20 = NULL;
  }
  if (ui_Label21 != NULL) {
    lv_obj_del(ui_Label21);
    ui_Label21 = NULL;
  }

  // Create a new label object
    ui_Label11 = lv_label_create(lv_scr_act());
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_Label11, 40);
    lv_obj_set_y(ui_Label11, -62);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    char buffer1[3];
    snprintf(buffer1, sizeof(buffer1), "%d", sensorOut[0]);
    lv_label_set_text(ui_Label11, buffer1);
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    // Repeat the above code for other sensor labels if needed
    ui_Label14 = lv_label_create(lv_scr_act());
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_Label14, 40);
    lv_obj_set_y(ui_Label14, -33);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);

    // Update the label text with the sensor value
    char buffer2[3];
    snprintf(buffer2, sizeof(buffer2), "%d", sensorOut[1]);
    lv_label_set_text(ui_Label14, buffer2);
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
 
 
     ui_Label1 = lv_label_create(lv_scr_act());
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 80);
    lv_obj_set_y(ui_Label1, -62);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    char buffer3[3];
    snprintf(buffer3, sizeof(buffer3), "%d", sensorOut[2]);
     lv_label_set_text(ui_Label1, buffer3);
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
 
 
    ui_Label12 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, 120);
    lv_obj_set_y(ui_Label12, -62);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    char buffer4[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer4, sizeof(buffer4), "%d", sensorOut[3]);
    lv_label_set_text(ui_Label12, buffer4);
    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
 
    ui_Label15 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, 80);
    lv_obj_set_y(ui_Label15, -34);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    char buffer5[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer5, sizeof(buffer5), "%d", sensorOut[4]);
    lv_label_set_text(ui_Label15, buffer5);
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);


    ui_Label16 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label16, 120);
    lv_obj_set_y(ui_Label16, -34);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    char buffer6[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer6, sizeof(buffer6), "%d", sensorOut[5]);
    lv_label_set_text(ui_Label16, buffer6);
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label16, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, 40);
    lv_obj_set_y(ui_Label17, -3);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    char buffer7[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer7, sizeof(buffer7), "%d", sensorOut[6]);
    lv_label_set_text(ui_Label17, buffer7);
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label18, 80);
    lv_obj_set_y(ui_Label18, -4);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
     char buffer8[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer8, sizeof(buffer8), "%d", sensorOut[7]);
    lv_label_set_text(ui_Label18, buffer8);
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label19, 120);
    lv_obj_set_y(ui_Label19, -3);
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    char buffer9[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer9, sizeof(buffer9), "%d", sensorOut[8]);
    lv_label_set_text(ui_Label19, buffer9);
    lv_obj_set_style_text_color(ui_Label19, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label19, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);


    ui_Label7 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, 40);
    lv_obj_set_y(ui_Label7, 80);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    char buffer10[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer10, sizeof(buffer10), "%d", sensorOut[9]);
    lv_label_set_text(ui_Label7, buffer10);
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, 80);
    lv_obj_set_y(ui_Label13, 80);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    char buffer11[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer11, sizeof(buffer11), "%d", sensorOut[10]);
    lv_label_set_text(ui_Label13, buffer11);
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label20 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label20, 120);
    lv_obj_set_y(ui_Label20, 80);
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    char buffer12[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer12, sizeof(buffer12), "%d", sensorOut[11]);
    lv_label_set_text(ui_Label20, buffer12);
    lv_obj_set_style_text_color(ui_Label20, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label20, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label21 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label21, 160);
    lv_obj_set_y(ui_Label21, 120);
    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);
    char buffer13[3]; // Assuming the maximum value can fit in 10 characters
    snprintf(buffer13, sizeof(buffer13), "%d", sensorOut[12]);
    lv_label_set_text(ui_Label21, buffer13);
    lv_obj_set_style_text_color(ui_Label21, lv_color_hex(0x28FF49), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    
}
/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
  // Use the appropriate method for reading touch inputs (e.g., getColor)
  uint16_t touchX = 0, touchY = 0;
  uint16_t color = tft.readPixel(touchX, touchY); // Assuming readPixel is the method to read touch input
  bool touched = (color != TFT_BLACK); // Check if the color is not black to determine touch

  if (!touched) {
    data->state = LV_INDEV_STATE_REL;
  } else {
    data->state = LV_INDEV_STATE_PR;
    data->point.x = touchX;
    data->point.y = touchY;
    Serial.print("Data x ");
    Serial.println(touchX);
    Serial.print("Data y ");
    Serial.println(touchY);
  }
}
void serialTask(void* pvParameters) {
    while (1) {
        if (Serial.available()) {
            char inChar = (char)Serial.read();
            serialBuffer.push(inChar);
        }
        vTaskDelay(10); // Adjust the delay as needed
    }
}
void parseSerialData() {
    static String receivedData = "";

    while (!serialBuffer.isEmpty()) {
        char inChar = serialBuffer.shift();

        if (inChar == '{') {
            receivedData = "";
        } else if (inChar == '}') {
            int index = 0;
            int value = 0;
            for (int i = 0; i < receivedData.length(); i++) {
                char c = receivedData[i];
                if (isDigit(c)) {
                    value = value * 10 + (c - '0');
                } else if (c == ',' || i == receivedData.length() - 1) {
                    if (index < NUM_SENSORS) {
                        sensorOut[index++] = value;
                    }
                    value = 0;
                }
            }

            // Update the UI with the new sensor data
            updateUI(sensorOut);
        } else {
            receivedData += inChar;
        }
    }
}

void setup()
{
    Serial.begin( 115200 ); /* prepare for possible serial debug */
    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println( LVGL_Arduino );
    Serial.println( "I am LVGL_Arduino" );

    lv_init();
    xTaskCreatePinnedToCore(serialTask, "Serial Task", 4096, NULL, 1, NULL, 1);
#if LV_USE_LOG != 0
    lv_log_register_print_cb( my_print ); /* register print function for debugging */
#endif

    tft.begin();          /* TFT init */
    tft.setRotation( 3 ); /* Landscape orientation, flipped */

    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );

    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init( &indev_drv );
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register( &indev_drv );


    ui_init();

    Serial.println( "Setup done" );
}

void loop() {
    parseSerialData();
    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
}



