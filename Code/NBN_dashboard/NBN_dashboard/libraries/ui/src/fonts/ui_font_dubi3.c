/*******************************************************************************
 * Size: 15 px
 * Bpp: 1
 * Opts: --bpp 1 --size 15 --font C:\Users\Norra\OneDrive\Documents\SquareLine\assets\DUBIEL.TTF -o C:\Users\Norra\OneDrive\Documents\SquareLine\assets\ui_font_dubi3.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_DUBI3
#define UI_FONT_DUBI3 1
#endif

#if UI_FONT_DUBI3

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xc0,

    /* U+0022 "\"" */
    0x75, 0x50,

    /* U+0024 "$" */
    0x63, 0x7d, 0xf4, 0xf1, 0xe5, 0x75, 0xd5, 0x66,
    0x0,

    /* U+0026 "&" */
    0x38, 0x50, 0xa1, 0xb5, 0x93, 0x26, 0x4c, 0xc8,
    0xfc,

    /* U+0027 "'" */
    0x54,

    /* U+0028 "(" */
    0x1a, 0xaa, 0xa4,

    /* U+0029 ")" */
    0x29, 0x55, 0x68,

    /* U+002A "*" */
    0x5f, 0x80,

    /* U+002B "+" */
    0x4e, 0x44,

    /* U+002C "," */
    0x54,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x1, 0x2, 0x2, 0x4, 0x8, 0x10, 0x10, 0x20,
    0x40, 0x80,

    /* U+0030 "0" */
    0x7a, 0x28, 0x61, 0x86, 0x18, 0x61, 0x89, 0xe0,

    /* U+0031 "1" */
    0x4b, 0x24, 0x92, 0x48,

    /* U+0032 "2" */
    0x72, 0x2a, 0xaa, 0x48, 0x42, 0x49, 0x45, 0xf0,

    /* U+0033 "3" */
    0x7a, 0x14, 0x41, 0x38, 0x30, 0x71, 0x85, 0xe0,

    /* U+0034 "4" */
    0x20, 0x82, 0x10, 0x52, 0x59, 0x7f, 0x10, 0xc0,

    /* U+0035 "5" */
    0x7, 0xa1, 0xa, 0x68, 0x21, 0xcc, 0x5c,

    /* U+0036 "6" */
    0x74, 0xe1, 0x4d, 0x46, 0x31, 0x8b, 0x80,

    /* U+0037 "7" */
    0xfc, 0x64, 0x22, 0x10, 0x84, 0x21, 0x0,

    /* U+0038 "8" */
    0x7a, 0x18, 0x71, 0x79, 0x68, 0x61, 0x85, 0xe0,

    /* U+0039 "9" */
    0x72, 0x28, 0x61, 0x86, 0x35, 0x51, 0x89, 0xc0,

    /* U+003A ":" */
    0xc6,

    /* U+003B ";" */
    0xc7, 0x80,

    /* U+003D "=" */
    0xe0, 0xe0,

    /* U+003F "?" */
    0x6b, 0xb5, 0x22, 0x46, 0x22,

    /* U+0041 "A" */
    0x8, 0x6, 0x5, 0x2, 0x81, 0x41, 0x30, 0x78,
    0x44, 0x43, 0x31, 0x80,

    /* U+0042 "B" */
    0x3e, 0x21, 0x21, 0x21, 0x3e, 0x22, 0x21, 0x21,
    0x21, 0x7e,

    /* U+0043 "C" */
    0x7a, 0x8e, 0xc, 0x18, 0x10, 0x20, 0xc1, 0x86,
    0xf4,

    /* U+0044 "D" */
    0x78, 0x89, 0xa, 0x14, 0x28, 0x50, 0xa1, 0x44,
    0xf0,

    /* U+0045 "E" */
    0x3f, 0x21, 0x25, 0x24, 0x3c, 0x24, 0x25, 0x21,
    0x21, 0x7f,

    /* U+0046 "F" */
    0x3f, 0x21, 0x25, 0x24, 0x3c, 0x24, 0x24, 0x20,
    0x20, 0x60,

    /* U+0047 "G" */
    0x78, 0x46, 0x82, 0x80, 0x80, 0x8f, 0x82, 0x82,
    0x82, 0x7c,

    /* U+0048 "H" */
    0x42, 0x21, 0x10, 0x88, 0x47, 0xe2, 0x11, 0x8,
    0x84, 0x42, 0x23, 0x80,

    /* U+0049 "I" */
    0x49, 0x24, 0x92, 0x48,

    /* U+004A "J" */
    0x18, 0x41, 0x4, 0x10, 0x41, 0x34, 0x93, 0x80,

    /* U+004B "K" */
    0x66, 0x48, 0x48, 0x50, 0x50, 0x78, 0x48, 0x4c,
    0x44, 0x46,

    /* U+004C "L" */
    0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x21, 0x21,
    0x21, 0x7f,

    /* U+004D "M" */
    0x70, 0x8c, 0x63, 0x98, 0xaa, 0x2a, 0x8a, 0xa2,
    0xe8, 0x92, 0x24, 0x89, 0x20,

    /* U+004E "N" */
    0x71, 0x8c, 0x42, 0x90, 0xa4, 0x25, 0x9, 0x42,
    0x30, 0x8c, 0x23, 0x1c, 0x40,

    /* U+004F "O" */
    0x79, 0xa, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x84,
    0xf0,

    /* U+0050 "P" */
    0x7c, 0x85, 0xa, 0x17, 0x48, 0x10, 0x20, 0x40,
    0xc0,

    /* U+0051 "Q" */
    0x79, 0xa, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x84,
    0x88, 0xe0, 0x60,

    /* U+0052 "R" */
    0x7c, 0x21, 0x10, 0x88, 0x47, 0xc2, 0x21, 0x18,
    0x8c, 0x42, 0x21, 0x80,

    /* U+0053 "S" */
    0x72, 0x28, 0xb0, 0x70, 0xe0, 0xe1, 0x85, 0xe0,

    /* U+0054 "T" */
    0xff, 0x91, 0x91, 0x11, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x38,

    /* U+0055 "U" */
    0x47, 0x21, 0x10, 0x88, 0x44, 0x22, 0x11, 0x8,
    0x84, 0x42, 0x1e, 0x0,

    /* U+0056 "V" */
    0x71, 0x11, 0xc, 0x82, 0x41, 0x40, 0xe0, 0x30,
    0x18, 0x8, 0x4, 0x0,

    /* U+0057 "W" */
    0x66, 0x22, 0x24, 0x22, 0x42, 0x64, 0x2b, 0x41,
    0x98, 0x19, 0x81, 0x98, 0x19, 0x81, 0x8,

    /* U+0058 "X" */
    0x22, 0x1a, 0x5, 0x3, 0x0, 0x80, 0x60, 0x50,
    0x4c, 0x22, 0x31, 0x80,

    /* U+0059 "Y" */
    0x63, 0x11, 0x5, 0x2, 0x80, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x6, 0x0,

    /* U+005A "Z" */
    0xfd, 0x12, 0x20, 0x81, 0x4, 0x8, 0xa1, 0x43,
    0xfc,

    /* U+005C "\\" */
    0x80, 0x40, 0x20, 0x10, 0x10, 0x8, 0x4, 0x2,
    0x2, 0x1,

    /* U+005E "^" */
    0x42,

    /* U+0060 "`" */
    0x18,

    /* U+0061 "a" */
    0xe2, 0x41, 0x1c, 0x92, 0x5f, 0x80,

    /* U+0062 "b" */
    0x41, 0x4, 0x1e, 0x45, 0x14, 0x51, 0x45, 0xe0,

    /* U+0063 "c" */
    0x74, 0xe1, 0x8, 0x45, 0xc0,

    /* U+0064 "d" */
    0x8, 0x20, 0x9a, 0x9a, 0x28, 0xa2, 0x89, 0xe0,

    /* U+0065 "e" */
    0x74, 0x63, 0xf8, 0x41, 0xc0,

    /* U+0066 "f" */
    0x74, 0x44, 0x44, 0x44, 0x44,

    /* U+0067 "g" */
    0xfe, 0x49, 0x24, 0xe2, 0xf, 0xa2, 0xf0,

    /* U+0068 "h" */
    0x40, 0x81, 0x3, 0xe4, 0x48, 0x91, 0x22, 0x44,
    0x88,

    /* U+0069 "i" */
    0x40, 0x24, 0x92, 0x48,

    /* U+006A "j" */
    0x20, 0x12, 0x49, 0x26, 0xe0,

    /* U+006B "k" */
    0x41, 0x4, 0x12, 0x51, 0x85, 0x14, 0x49, 0x20,

    /* U+006C "l" */
    0x49, 0x24, 0x92, 0x48,

    /* U+006D "m" */
    0x7b, 0x91, 0x24, 0x49, 0x12, 0x44, 0x91, 0x24,
    0x48,

    /* U+006E "n" */
    0x78, 0x89, 0x12, 0x24, 0x48, 0x91, 0x0,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xc5, 0xc0,

    /* U+0070 "p" */
    0x79, 0x14, 0x51, 0x45, 0x26, 0x94, 0x40,

    /* U+0071 "q" */
    0x7a, 0x28, 0xa2, 0x8a, 0x27, 0x82, 0x8,

    /* U+0072 "r" */
    0x7a, 0x10, 0x84, 0x21, 0x0,

    /* U+0073 "s" */
    0xf4, 0x38, 0x61, 0xc5, 0xc0,

    /* U+0074 "t" */
    0x4, 0x44, 0x44, 0x44, 0x56,

    /* U+0075 "u" */
    0x44, 0x89, 0x12, 0x24, 0x48, 0x9f, 0x0,

    /* U+0076 "v" */
    0x44, 0x48, 0xa1, 0x41, 0x82, 0x4, 0x0,

    /* U+0077 "w" */
    0x48, 0x14, 0x8d, 0x86, 0xc3, 0x60, 0x90, 0x50,

    /* U+0078 "x" */
    0x40, 0x50, 0xc0, 0x82, 0x89, 0x11, 0x0,

    /* U+0079 "y" */
    0x44, 0x48, 0xa1, 0xc1, 0x82, 0x4, 0x28, 0xe0,

    /* U+007A "z" */
    0xf4, 0x88, 0x44, 0x67, 0xe0,

    /* U+007E "~" */
    0x66, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 61, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 56, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 5, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 14, .adv_w = 132, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 24, .adv_w = 42, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 27, .adv_w = 42, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 30, .adv_w = 48, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 32, .adv_w = 76, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 34, .adv_w = 48, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 35, .adv_w = 84, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 36, .adv_w = 43, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 76, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 100, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 95, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 100, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 45, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 34, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 123, .adv_w = 72, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 125, .adv_w = 93, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 152, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 143, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 142, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 74, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 98, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 152, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 175, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 148, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 299, .adv_w = 157, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 155, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 203, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 141, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 117, .box_w = 4, .box_h = 2, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 412, .adv_w = 99, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 413, .adv_w = 97, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 109, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 84, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 77, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 457, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 60, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 51, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 475, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 63, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 180, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 121, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 515, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 522, .adv_w = 84, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 78, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 69, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 119, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 147, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 113, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 574, .adv_w = 83, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 98, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 7}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 1, 2, 0, 3, 0, 4, 5,
    6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 0, 26, 0, 27,
    0, 28, 29, 30, 31, 32, 33, 34,
    35, 36, 37, 38, 39, 40, 41, 42,
    43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 0, 54, 0, 55, 0,
    56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71,
    72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 0, 0, 0, 83
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 95, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    6, 76,
    16, 15,
    16, 17,
    16, 19,
    16, 21,
    16, 22,
    16, 23,
    20, 22,
    20, 24,
    29, 31,
    29, 35,
    29, 38,
    29, 41,
    29, 43,
    29, 48,
    29, 49,
    29, 50,
    29, 51,
    29, 53,
    29, 60,
    29, 61,
    29, 62,
    29, 67,
    30, 29,
    30, 30,
    30, 33,
    30, 34,
    30, 41,
    30, 46,
    30, 53,
    30, 59,
    30, 65,
    30, 66,
    30, 67,
    30, 69,
    32, 29,
    32, 30,
    32, 33,
    32, 34,
    32, 38,
    32, 39,
    32, 41,
    32, 42,
    32, 44,
    32, 46,
    32, 49,
    32, 50,
    32, 51,
    32, 53,
    32, 59,
    32, 65,
    32, 68,
    32, 69,
    34, 29,
    34, 38,
    34, 58,
    34, 60,
    34, 61,
    34, 62,
    34, 64,
    34, 72,
    34, 76,
    35, 29,
    35, 32,
    35, 33,
    35, 34,
    35, 36,
    35, 37,
    35, 38,
    35, 42,
    35, 44,
    35, 46,
    35, 47,
    35, 50,
    35, 51,
    35, 53,
    35, 58,
    35, 66,
    35, 68,
    35, 69,
    36, 58,
    36, 60,
    36, 61,
    36, 62,
    36, 67,
    36, 72,
    36, 78,
    36, 80,
    36, 82,
    37, 31,
    37, 35,
    37, 38,
    37, 43,
    37, 58,
    37, 60,
    37, 61,
    37, 62,
    38, 29,
    38, 31,
    38, 35,
    38, 38,
    38, 43,
    38, 47,
    38, 58,
    38, 60,
    38, 61,
    38, 62,
    38, 63,
    38, 66,
    38, 72,
    38, 78,
    38, 80,
    38, 82,
    39, 31,
    39, 35,
    39, 38,
    39, 43,
    39, 51,
    39, 58,
    39, 62,
    39, 72,
    39, 76,
    39, 78,
    39, 79,
    39, 80,
    40, 50,
    40, 51,
    40, 53,
    41, 29,
    41, 31,
    41, 35,
    41, 38,
    41, 43,
    41, 58,
    41, 62,
    41, 72,
    41, 78,
    41, 80,
    41, 82,
    42, 29,
    42, 31,
    42, 35,
    42, 38,
    42, 43,
    42, 45,
    42, 46,
    42, 47,
    42, 49,
    42, 58,
    42, 62,
    42, 66,
    42, 71,
    42, 72,
    42, 76,
    42, 78,
    42, 80,
    42, 82,
    43, 29,
    43, 33,
    43, 34,
    43, 37,
    43, 38,
    43, 40,
    43, 41,
    43, 42,
    43, 49,
    43, 51,
    43, 52,
    43, 53,
    43, 54,
    43, 65,
    43, 66,
    43, 68,
    43, 69,
    43, 70,
    43, 71,
    43, 75,
    43, 82,
    44, 29,
    44, 32,
    44, 36,
    44, 39,
    44, 40,
    44, 41,
    44, 42,
    44, 43,
    44, 44,
    44, 46,
    44, 49,
    44, 51,
    44, 53,
    44, 58,
    44, 62,
    44, 72,
    44, 75,
    44, 76,
    44, 78,
    45, 29,
    45, 33,
    45, 37,
    45, 42,
    45, 46,
    45, 49,
    45, 50,
    45, 51,
    45, 53,
    45, 54,
    46, 31,
    46, 35,
    46, 38,
    46, 42,
    46, 43,
    46, 45,
    46, 48,
    46, 49,
    46, 50,
    46, 51,
    46, 53,
    46, 58,
    46, 62,
    46, 72,
    46, 78,
    46, 79,
    46, 80,
    46, 81,
    46, 82,
    47, 29,
    47, 30,
    47, 34,
    47, 36,
    47, 37,
    47, 39,
    47, 40,
    47, 41,
    47, 42,
    47, 44,
    47, 46,
    47, 50,
    47, 52,
    47, 53,
    47, 66,
    47, 70,
    47, 71,
    47, 72,
    47, 73,
    47, 77,
    47, 78,
    47, 79,
    47, 80,
    47, 81,
    47, 82,
    48, 29,
    48, 38,
    48, 58,
    48, 62,
    48, 72,
    48, 75,
    48, 76,
    48, 79,
    48, 80,
    49, 29,
    49, 31,
    49, 35,
    49, 43,
    49, 46,
    49, 47,
    49, 58,
    49, 60,
    49, 61,
    49, 62,
    49, 63,
    49, 64,
    49, 66,
    49, 67,
    49, 70,
    49, 71,
    49, 72,
    49, 73,
    49, 74,
    49, 75,
    49, 76,
    49, 77,
    49, 78,
    49, 79,
    49, 80,
    49, 81,
    49, 82,
    49, 83,
    50, 11,
    50, 13,
    50, 29,
    50, 31,
    50, 35,
    50, 38,
    50, 43,
    50, 45,
    50, 46,
    50, 47,
    50, 58,
    50, 60,
    50, 61,
    50, 62,
    50, 63,
    50, 66,
    50, 76,
    50, 77,
    50, 78,
    50, 79,
    50, 80,
    50, 81,
    50, 82,
    50, 83,
    51, 11,
    51, 13,
    51, 29,
    51, 31,
    51, 35,
    51, 38,
    51, 42,
    51, 43,
    51, 45,
    51, 47,
    51, 58,
    51, 62,
    51, 66,
    51, 72,
    51, 75,
    51, 78,
    51, 82,
    52, 43,
    52, 62,
    53, 11,
    53, 13,
    53, 29,
    53, 31,
    53, 35,
    53, 38,
    53, 43,
    53, 45,
    53, 47,
    53, 58,
    53, 60,
    53, 62,
    53, 66,
    53, 72,
    53, 73,
    53, 76,
    53, 77,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    54, 29,
    54, 43,
    54, 45,
    54, 66,
    58, 60,
    58, 61,
    58, 62,
    58, 63,
    58, 65,
    58, 66,
    58, 67,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 73,
    58, 75,
    58, 77,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    61, 58,
    61, 62,
    61, 71,
    61, 72,
    61, 78,
    61, 79,
    62, 58,
    62, 70,
    62, 71,
    62, 77,
    62, 78,
    63, 66,
    63, 78,
    65, 58,
    65, 62,
    65, 72,
    65, 78,
    66, 60,
    66, 61,
    66, 62,
    66, 64,
    66, 67,
    66, 72,
    66, 74,
    66, 77,
    66, 78,
    66, 80,
    66, 82,
    68, 58,
    68, 62,
    68, 72,
    68, 78,
    68, 79,
    68, 82,
    69, 58,
    69, 62,
    69, 72,
    69, 78,
    69, 82,
    70, 58,
    70, 62,
    70, 72,
    70, 78,
    70, 79,
    70, 80,
    70, 82,
    71, 58,
    71, 60,
    71, 62,
    71, 72,
    71, 77,
    71, 82,
    72, 11,
    72, 13,
    72, 79,
    72, 80,
    72, 82,
    73, 77,
    73, 79,
    73, 80,
    73, 82,
    74, 76,
    75, 11,
    75, 60,
    75, 61,
    75, 62,
    75, 69,
    75, 72,
    75, 74,
    75, 82,
    78, 58,
    78, 62,
    78, 64,
    78, 70,
    79, 11,
    79, 13,
    80, 11,
    80, 13,
    80, 58,
    80, 62,
    80, 64,
    80, 69,
    80, 72,
    82, 11,
    82, 13,
    82, 58,
    82, 62,
    82, 72
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -18, -15, -7, -13, -13, -12, -8, -12,
    -7, -18, -20, -5, -5, -23, -25, -32,
    -55, -52, -32, -10, -13, -10, -7, -20,
    -7, -8, -15, -8, -12, -15, -8, -5,
    -7, -12, -8, -23, -12, -12, -13, -5,
    -13, -12, -13, -12, -15, -17, -13, -18,
    -21, -12, -10, -10, -5, -30, -18, -13,
    -12, -10, -13, -15, -13, -8, -20, -17,
    -15, -18, -17, -10, -18, -20, -17, -20,
    -20, -20, -22, -22, -12, -12, -13, -12,
    -12, -12, -17, -18, -15, -17, -18, -17,
    -18, -7, -5, -5, -17, -8, -8, -12,
    -10, -17, -12, -13, -17, -12, -12, -15,
    -17, -18, -13, -13, -10, -18, -17, -20,
    -17, -22, -20, -8, -27, -7, -10, -15,
    -18, -7, -18, -42, -38, -31, -35, -35,
    -5, -15, -12, -7, -18, -8, -17, -17,
    -20, -18, -18, -22, -12, -15, -22, -22,
    -13, -3, -7, -5, -22, -28, -17, -17,
    -22, -20, -20, -27, -22, -28, -18, -18,
    -13, -3, -13, -18, -22, -21, -32, -25,
    -35, -3, -10, -8, -10, -8, -3, -3,
    -5, -5, -37, -8, -13, -10, -17, -13,
    -20, -3, -18, -20, -18, -17, -15, -7,
    -13, -13, -5, -12, -5, -18, -10, -7,
    -18, -10, -20, -25, -18, -23, -2, -22,
    -25, -7, -3, -20, -17, -23, -30, -35,
    -32, -30, -12, -17, -18, -25, -27, -27,
    -5, -22, -12, -7, -10, -10, -8, -7,
    -7, -10, -10, -12, -8, -7, -10, -10,
    -3, -7, -8, 4, -8, -5, -12, -13,
    -12, -8, -8, -23, -15, -5, -15, -15,
    -2, -7, -3, -3, -30, -18, -17, -17,
    -5, -10, -20, -20, -20, -18, -13, -20,
    -13, -15, -22, -22, -23, -22, -18, -18,
    -22, -20, -18, -20, -22, -20, -22, -20,
    -41, -38, -62, -18, -20, -23, -26, -25,
    -5, -20, -32, -30, -27, -35, -12, -12,
    -27, -15, -25, -31, -30, -27, -28, -30,
    -35, -27, -48, -18, -17, -21, -12, -32,
    -30, -13, -33, -39, -13, -30, -30, -27,
    -30, -32, -18, -27, -28, -32, -20, -13,
    -22, -30, -25, -15, -27, -28, -35, -13,
    -28, -32, -30, -13, -33, -35, -35, -27,
    -25, -3, -5, -2, -3, -6, -6, -7,
    -3, -6, -7, -6, -7, -7, -7, -4,
    -6, -7, -11, -18, -29, -18, -6, -14,
    -6, -8, -4, -8, -6, -10, 4, -6,
    -3, -6, -6, -7, -16, -8, -8, -10,
    -12, -6, -4, -8, -2, -10, -7, -6,
    -8, -6, -7, -10, -6, -11, -13, -7,
    -10, -6, -9, -8, -8, -10, -10, -8,
    -15, -20, -21, -17, -18, -15, -8, -7,
    -11, -8, -13, -14, -3, -7, -14, -13,
    -14, -4, -13, -8, -10, -8, -18, -4,
    -7, -7, -14, -7, -6, -4, -8, -11,
    -4, -8, -27, -23, -31, -21, -14, -17,
    -13, -10, -15, -25, -22, -4, -14, -13
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 464,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_dubi3 = {
#else
lv_font_t ui_font_dubi3 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_DUBI3*/

