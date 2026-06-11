/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font C:\Users\Norra\OneDrive\Documents\SquareLine\assets\DUBIEL.TTF -o C:\Users\Norra\OneDrive\Documents\SquareLine\assets\ui_font_dubi.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_DUBI
#define UI_FONT_DUBI 1
#endif

#if UI_FONT_DUBI

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xda, 0x83, 0xc0,

    /* U+0022 "\"" */
    0xd6, 0xd5, 0x28, 0x0,

    /* U+0024 "$" */
    0x18, 0x76, 0x56, 0x56, 0x54, 0x74, 0x3e, 0x17,
    0x15, 0x55, 0x55, 0x96, 0x56, 0x3c, 0x10,

    /* U+0026 "&" */
    0x1c, 0x8, 0x82, 0x20, 0x90, 0x39, 0xd4, 0xa9,
    0xa2, 0x28, 0x8e, 0x23, 0x8c, 0x61, 0x1d, 0x7b,
    0x80,

    /* U+0027 "'" */
    0xf6, 0x80,

    /* U+0028 "(" */
    0x29, 0x29, 0x24, 0x92, 0x44, 0x90,

    /* U+0029 ")" */
    0x89, 0x22, 0x49, 0x24, 0xa4, 0xa0,

    /* U+002A "*" */
    0x46, 0xd4,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xf6, 0x80,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x0, 0x40, 0x20, 0x10, 0x4, 0x2, 0x1, 0x0,
    0x80, 0x20, 0x10, 0x8, 0x4, 0x1, 0x0, 0x80,
    0x0,

    /* U+0030 "0" */
    0x3c, 0x42, 0x42, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0x42, 0x42, 0x3c,

    /* U+0031 "1" */
    0x21, 0x18, 0x42, 0x10, 0x84, 0x21, 0x8, 0x47,
    0x0,

    /* U+0032 "2" */
    0x38, 0x44, 0x92, 0x92, 0x92, 0x62, 0x4, 0x8,
    0x9, 0x11, 0x21, 0x41, 0x7f,

    /* U+0033 "3" */
    0x79, 0xb, 0xe, 0x10, 0x20, 0x8e, 0x2, 0x43,
    0x86, 0xc, 0x27, 0x80,

    /* U+0034 "4" */
    0x18, 0x18, 0x18, 0x10, 0x38, 0x28, 0x48, 0x49,
    0x89, 0xff, 0x8, 0x8, 0x1c,

    /* U+0035 "5" */
    0xfd, 0xf2, 0x4, 0x9, 0x1d, 0x80, 0x81, 0x43,
    0x86, 0xe, 0x27, 0x80,

    /* U+0036 "6" */
    0x7c, 0x8a, 0x14, 0x9, 0x1d, 0xa0, 0xc1, 0x83,
    0x6, 0xa, 0x23, 0x80,

    /* U+0037 "7" */
    0xff, 0xa, 0x14, 0x40, 0x81, 0x4, 0x8, 0x10,
    0x60, 0xc1, 0x83, 0x0,

    /* U+0038 "8" */
    0x78, 0x84, 0x82, 0x82, 0xc2, 0x7c, 0x3c, 0xc6,
    0x83, 0x81, 0x81, 0x82, 0x7c,

    /* U+0039 "9" */
    0x78, 0x8a, 0x14, 0x18, 0x30, 0x51, 0x9d, 0x2,
    0x85, 0x94, 0x27, 0x80,

    /* U+003A ":" */
    0xf0, 0x3, 0xc0,

    /* U+003B ";" */
    0xf0, 0x3, 0xda,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003F "?" */
    0x7a, 0x19, 0x65, 0x64, 0x23, 0x10, 0x49, 0x23,
    0xc, 0x30,

    /* U+0041 "A" */
    0x4, 0x0, 0x40, 0xe, 0x0, 0xe0, 0x12, 0x1,
    0x30, 0x13, 0x2, 0x30, 0x1f, 0x82, 0x18, 0x41,
    0x84, 0x8, 0x61, 0xe0,

    /* U+0042 "B" */
    0x7f, 0x88, 0x32, 0x4, 0x81, 0x20, 0x8f, 0xc2,
    0x18, 0x81, 0x20, 0x48, 0x12, 0x4, 0x82, 0x7f,
    0x0,

    /* U+0043 "C" */
    0x1c, 0x91, 0xd0, 0x78, 0x1c, 0xe, 0x3, 0x1,
    0x80, 0xc0, 0xa0, 0x50, 0x24, 0x31, 0xe8,

    /* U+0044 "D" */
    0x7f, 0x6, 0x18, 0xc1, 0x18, 0x33, 0x6, 0x60,
    0xcc, 0x19, 0x83, 0x30, 0x66, 0xc, 0xc1, 0x18,
    0x47, 0xf0,

    /* U+0045 "E" */
    0x7f, 0xc8, 0x12, 0x4, 0x81, 0x22, 0xf, 0x82,
    0x20, 0x88, 0x20, 0x48, 0x12, 0x4, 0x83, 0x7f,
    0xc0,

    /* U+0046 "F" */
    0x7f, 0xc8, 0x12, 0x4, 0x81, 0x22, 0xf, 0x82,
    0x20, 0x88, 0x20, 0x8, 0x2, 0x0, 0x80, 0x70,
    0x0,

    /* U+0047 "G" */
    0x1e, 0xc, 0x31, 0x2, 0x60, 0x4c, 0x1, 0x80,
    0x30, 0xfe, 0x4, 0xc0, 0x98, 0x11, 0x2, 0x10,
    0xc1, 0xe0,

    /* U+0048 "H" */
    0x70, 0xe2, 0x4, 0x20, 0x42, 0x4, 0x20, 0x43,
    0xfc, 0x20, 0x42, 0x4, 0x20, 0x42, 0x4, 0x20,
    0x42, 0x4, 0x70, 0xe0,

    /* U+0049 "I" */
    0x78, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x78,

    /* U+004A "J" */
    0x1c, 0x10, 0x20, 0x40, 0x81, 0x2, 0x4, 0x9,
    0x93, 0x24, 0x4f, 0x0,

    /* U+004B "K" */
    0x71, 0xc4, 0x20, 0x88, 0x12, 0x2, 0x80, 0x58,
    0xd, 0x1, 0x30, 0x22, 0x4, 0x60, 0x8c, 0x10,
    0xc7, 0x1c,

    /* U+004C "L" */
    0x70, 0x8, 0x2, 0x0, 0x80, 0x20, 0x8, 0x2,
    0x0, 0x81, 0x20, 0x48, 0x12, 0x4, 0x83, 0x7f,
    0xc0,

    /* U+004D "M" */
    0x78, 0x31, 0xc3, 0xe, 0x18, 0x51, 0x42, 0xca,
    0x16, 0x50, 0x96, 0x84, 0xa4, 0x27, 0x21, 0x39,
    0x8, 0x88, 0x44, 0x47, 0x27, 0x0,

    /* U+004E "N" */
    0x71, 0xc6, 0x10, 0xe2, 0x14, 0x42, 0xc8, 0x49,
    0x9, 0xa1, 0x14, 0x23, 0x84, 0x30, 0x86, 0x10,
    0x47, 0x8,

    /* U+004F "O" */
    0x1c, 0x11, 0x10, 0x58, 0x2c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xa0, 0xd0, 0x44, 0x21, 0xe0,

    /* U+0050 "P" */
    0x7f, 0x8, 0x22, 0x4, 0x81, 0x20, 0x48, 0x23,
    0xd0, 0x80, 0x20, 0x8, 0x2, 0x0, 0x80, 0x78,
    0x0,

    /* U+0051 "Q" */
    0x1e, 0x8, 0x44, 0x19, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x34, 0x9, 0x2, 0x23,
    0x7, 0x0, 0x60, 0xe,

    /* U+0052 "R" */
    0x7f, 0x82, 0xc, 0x20, 0x42, 0x4, 0x20, 0x42,
    0x8, 0x3f, 0x2, 0x18, 0x21, 0x82, 0xc, 0x20,
    0xc2, 0xc, 0x70, 0x60,

    /* U+0053 "S" */
    0x78, 0x86, 0x82, 0xc2, 0xe0, 0x78, 0x3c, 0xe,
    0x3, 0x81, 0x81, 0xc2, 0x3c,

    /* U+0054 "T" */
    0xff, 0xe2, 0x38, 0x86, 0x21, 0x8, 0x42, 0x0,
    0x80, 0x20, 0x8, 0x2, 0x0, 0x80, 0x20, 0x1c,
    0x0,

    /* U+0055 "U" */
    0x70, 0xe2, 0x4, 0x20, 0x42, 0x4, 0x20, 0x42,
    0x4, 0x20, 0x42, 0x4, 0x20, 0x42, 0x4, 0x20,
    0x42, 0x4, 0x1f, 0x80,

    /* U+0056 "V" */
    0x78, 0xc6, 0x10, 0x42, 0xc, 0x41, 0x88, 0x12,
    0x2, 0x40, 0x68, 0xd, 0x0, 0xc0, 0x18, 0x3,
    0x0, 0x40,

    /* U+0057 "W" */
    0x73, 0x8c, 0x43, 0x10, 0x86, 0x21, 0x94, 0x43,
    0x28, 0x82, 0x5a, 0x4, 0xb4, 0xd, 0x28, 0x1c,
    0x70, 0x18, 0xe0, 0x31, 0x80, 0x61, 0x0, 0x82,
    0x0,

    /* U+0058 "X" */
    0x38, 0xc1, 0x8, 0x19, 0x0, 0xd0, 0xe, 0x0,
    0x60, 0x6, 0x0, 0xb0, 0xb, 0x1, 0x18, 0x11,
    0x82, 0xc, 0x71, 0xe0,

    /* U+0059 "Y" */
    0x71, 0xc6, 0x10, 0x44, 0xc, 0x80, 0xa0, 0x1c,
    0x1, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x2,
    0x0, 0xf0,

    /* U+005A "Z" */
    0xff, 0x41, 0x21, 0x90, 0x80, 0xc0, 0x40, 0x60,
    0x21, 0x30, 0x90, 0x58, 0x68, 0x3f, 0xf8,

    /* U+005C "\\" */
    0x80, 0x10, 0x4, 0x0, 0x80, 0x10, 0x2, 0x0,
    0x80, 0x10, 0x2, 0x0, 0x40, 0x10, 0x2, 0x0,
    0x40,

    /* U+005E "^" */
    0x3, 0x86,

    /* U+0060 "`" */
    0xc, 0x20,

    /* U+0061 "a" */
    0x79, 0x89, 0x10, 0x27, 0xd0, 0xa1, 0x46, 0x76,

    /* U+0062 "b" */
    0x60, 0x20, 0x20, 0x20, 0x2e, 0x32, 0x21, 0x21,
    0x21, 0x21, 0x21, 0x32, 0x3c,

    /* U+0063 "c" */
    0x79, 0x1a, 0x34, 0x8, 0x10, 0x61, 0x42, 0x78,

    /* U+0064 "d" */
    0x6, 0x1, 0x0, 0x80, 0x47, 0xa4, 0x32, 0x9,
    0x4, 0x82, 0x41, 0x20, 0x90, 0xc7, 0xb0,

    /* U+0065 "e" */
    0x72, 0x28, 0x61, 0xfe, 0x8, 0x21, 0x78,

    /* U+0066 "f" */
    0x3c, 0x48, 0x91, 0x7, 0x4, 0x8, 0x10, 0x20,
    0x40, 0x81, 0x7, 0x0,

    /* U+0067 "g" */
    0x3f, 0x21, 0xd0, 0x88, 0x44, 0x22, 0x21, 0xe0,
    0x80, 0x7e, 0x21, 0x20, 0x8f, 0x80,

    /* U+0068 "h" */
    0x40, 0x40, 0x40, 0x40, 0x5c, 0x62, 0x42, 0x42,
    0x42, 0x42, 0x42, 0x42, 0x66,

    /* U+0069 "i" */
    0x66, 0x0, 0x62, 0x22, 0x22, 0x22, 0x60,

    /* U+006A "j" */
    0x11, 0x0, 0x11, 0x11, 0x11, 0x11, 0x1d, 0xde,

    /* U+006B "k" */
    0x60, 0x10, 0x8, 0x4, 0x2, 0x21, 0x20, 0xa0,
    0x50, 0x38, 0x16, 0x9, 0x84, 0x46, 0x30,

    /* U+006C "l" */
    0x49, 0x24, 0x92, 0x49, 0x24,

    /* U+006D "m" */
    0x5c, 0xe1, 0x8c, 0x44, 0x21, 0x10, 0x84, 0x42,
    0x11, 0x8, 0x44, 0x21, 0x10, 0x84, 0x46, 0x38,

    /* U+006E "n" */
    0x6e, 0x18, 0x88, 0x44, 0x22, 0x11, 0x8, 0x84,
    0x42, 0x33, 0x0,

    /* U+006F "o" */
    0x72, 0x28, 0x61, 0x86, 0x18, 0x62, 0x70,

    /* U+0070 "p" */
    0x5c, 0x62, 0x41, 0x41, 0x41, 0x41, 0x41, 0x62,
    0x54, 0x48, 0x40, 0x60,

    /* U+0071 "q" */
    0x7a, 0x86, 0x82, 0x82, 0x82, 0x82, 0x82, 0x86,
    0x4a, 0x32, 0x2, 0x6,

    /* U+0072 "r" */
    0x7a, 0x50, 0x84, 0x21, 0x8, 0x40,

    /* U+0073 "s" */
    0x7a, 0x2c, 0x18, 0x38, 0x38, 0x61, 0x78,

    /* U+0074 "t" */
    0x0, 0x82, 0x8, 0x70, 0x82, 0x8, 0x20, 0x82,
    0x9, 0x18,

    /* U+0075 "u" */
    0x46, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x4e,
    0x72,

    /* U+0076 "v" */
    0x42, 0x62, 0x64, 0x24, 0x34, 0x38, 0x18, 0x18,
    0x10,

    /* U+0077 "w" */
    0x66, 0x22, 0x24, 0x32, 0x41, 0x74, 0x15, 0x41,
    0x98, 0x19, 0x80, 0x88, 0x9, 0x0,

    /* U+0078 "x" */
    0x63, 0x1a, 0x5, 0x1, 0x0, 0xc0, 0xa0, 0x98,
    0x44, 0x63, 0x0,

    /* U+0079 "y" */
    0x61, 0x10, 0x8c, 0x82, 0x41, 0x20, 0xe0, 0x30,
    0x10, 0x8, 0x4, 0x1c, 0xe, 0x0,

    /* U+007A "z" */
    0x7e, 0x88, 0x30, 0x41, 0x86, 0x8, 0x31, 0x7e,

    /* U+007E "~" */
    0x63, 0x68, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 81, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 75, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 9, .adv_w = 137, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 24, .adv_w = 175, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 48, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 43, .adv_w = 56, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 49, .adv_w = 56, .box_w = 3, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 55, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 57, .adv_w = 101, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 61, .adv_w = 64, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 63, .adv_w = 112, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 64, .adv_w = 58, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 189, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 101, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 134, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 137, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 135, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 127, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 131, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 124, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 137, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 133, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 60, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 45, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 209, .adv_w = 96, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 212, .adv_w = 124, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 202, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 190, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 309, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 189, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 217, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 99, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 131, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 203, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 174, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 233, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 197, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 163, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 175, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 168, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 513, .adv_w = 210, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 140, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 171, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 206, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 201, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 271, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 202, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 646, .adv_w = 201, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 147, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 189, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 156, .box_w = 5, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 698, .adv_w = 132, .box_w = 4, .box_h = 3, .ofs_x = 3, .ofs_y = 10},
    {.bitmap_index = 700, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 145, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 114, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 145, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 751, .adv_w = 103, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 763, .adv_w = 139, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 777, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 80, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 68, .box_w = 4, .box_h = 16, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 805, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 84, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 240, .box_w = 14, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 161, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 871, .adv_w = 144, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 883, .adv_w = 112, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 103, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 92, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 906, .adv_w = 158, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 915, .adv_w = 152, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 196, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 938, .adv_w = 152, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 151, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 963, .adv_w = 111, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 131, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 10}
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
    -24, -20, -9, -18, -18, -16, -11, -16,
    -9, -24, -27, -6, -6, -31, -33, -42,
    -73, -69, -42, -13, -18, -13, -9, -27,
    -9, -11, -20, -11, -16, -20, -11, -6,
    -9, -16, -11, -31, -15, -15, -18, -6,
    -18, -16, -18, -16, -20, -22, -18, -24,
    -29, -16, -13, -13, -6, -40, -24, -18,
    -16, -13, -17, -20, -18, -11, -27, -22,
    -20, -24, -22, -13, -24, -27, -22, -27,
    -27, -27, -29, -29, -16, -16, -18, -16,
    -15, -15, -22, -24, -20, -22, -24, -22,
    -24, -9, -6, -6, -22, -11, -11, -16,
    -13, -22, -16, -18, -22, -16, -16, -20,
    -22, -24, -18, -18, -13, -24, -22, -27,
    -22, -29, -27, -11, -36, -9, -13, -20,
    -24, -9, -24, -55, -51, -42, -46, -46,
    -6, -20, -16, -9, -24, -11, -22, -22,
    -27, -24, -24, -29, -16, -20, -29, -29,
    -18, -4, -9, -6, -29, -37, -22, -23,
    -30, -27, -27, -36, -29, -37, -24, -25,
    -17, -4, -18, -24, -29, -29, -42, -33,
    -47, -4, -13, -11, -13, -11, -4, -4,
    -6, -6, -49, -11, -17, -13, -22, -18,
    -27, -4, -24, -27, -24, -22, -20, -9,
    -18, -18, -6, -16, -6, -24, -13, -9,
    -24, -13, -27, -33, -24, -31, -2, -29,
    -33, -9, -4, -27, -22, -31, -40, -47,
    -42, -40, -16, -22, -24, -33, -36, -36,
    -6, -29, -16, -9, -13, -13, -11, -9,
    -9, -13, -13, -16, -11, -9, -13, -13,
    -4, -9, -11, 5, -11, -6, -16, -18,
    -16, -11, -11, -31, -20, -6, -20, -20,
    -2, -9, -4, -4, -40, -24, -22, -22,
    -6, -13, -27, -27, -27, -25, -18, -27,
    -18, -20, -29, -29, -31, -29, -24, -24,
    -29, -27, -24, -27, -29, -27, -29, -27,
    -54, -51, -82, -24, -27, -31, -35, -33,
    -6, -27, -42, -40, -36, -47, -16, -16,
    -36, -20, -33, -42, -40, -36, -38, -40,
    -47, -36, -64, -24, -22, -29, -15, -42,
    -40, -18, -44, -52, -18, -40, -40, -36,
    -40, -42, -24, -36, -37, -42, -27, -18,
    -29, -40, -33, -20, -36, -38, -47, -18,
    -38, -42, -40, -18, -44, -47, -46, -36,
    -33, -4, -6, -2, -4, -7, -7, -9,
    -4, -7, -9, -7, -9, -9, -9, -5,
    -7, -9, -15, -24, -38, -24, -7, -19,
    -8, -11, -5, -11, -8, -14, 5, -7,
    -4, -7, -7, -9, -22, -11, -11, -14,
    -16, -8, -5, -11, -3, -14, -9, -7,
    -11, -8, -9, -13, -7, -15, -17, -9,
    -13, -7, -12, -11, -11, -13, -13, -11,
    -20, -27, -28, -22, -24, -20, -11, -9,
    -15, -11, -17, -19, -4, -9, -19, -17,
    -18, -5, -17, -11, -13, -11, -25, -5,
    -9, -9, -19, -9, -7, -5, -11, -15,
    -5, -11, -36, -30, -41, -28, -19, -23,
    -17, -14, -20, -34, -30, -5, -19, -17
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
const lv_font_t ui_font_dubi = {
#else
lv_font_t ui_font_dubi = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_DUBI*/

