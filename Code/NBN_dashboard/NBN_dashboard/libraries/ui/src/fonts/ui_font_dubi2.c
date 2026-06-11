/*******************************************************************************
 * Size: 17 px
 * Bpp: 1
 * Opts: --bpp 1 --size 17 --font C:\Users\Norra\OneDrive\Documents\SquareLine\assets\DUBIEL.TTF -o C:\Users\Norra\OneDrive\Documents\SquareLine\assets\ui_font_dubi2.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_DUBI2
#define UI_FONT_DUBI2 1
#endif

#if UI_FONT_DUBI2

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x6a, 0x8f,

    /* U+0022 "\"" */
    0xf5, 0x50,

    /* U+0024 "$" */
    0x10, 0xf9, 0x6a, 0xc5, 0x87, 0x7, 0xd, 0x1a,
    0xb5, 0x6a, 0xe3, 0x0,

    /* U+0026 "&" */
    0x38, 0x12, 0x9, 0x4, 0x83, 0xb2, 0xaa, 0x51,
    0x38, 0x8c, 0x66, 0x33, 0x4e, 0xe0,

    /* U+0027 "'" */
    0xd4,

    /* U+0028 "(" */
    0x9, 0x49, 0x24, 0x92, 0x24, 0x0,

    /* U+0029 ")" */
    0x11, 0x22, 0x49, 0x25, 0x24, 0x0,

    /* U+002A "*" */
    0x57, 0x80,

    /* U+002B "+" */
    0x21, 0x1e, 0x42, 0x0,

    /* U+002C "," */
    0xf4,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x0, 0x80, 0x20, 0x10, 0x8, 0x4, 0x1, 0x0,
    0x80, 0x40, 0x10, 0x8, 0x4, 0x1, 0x0,

    /* U+0030 "0" */
    0x72, 0x28, 0xa1, 0x86, 0x18, 0x61, 0x86, 0x28,
    0x9c,

    /* U+0031 "1" */
    0x21, 0x18, 0x42, 0x10, 0x84, 0x21, 0x8, 0xe0,

    /* U+0032 "2" */
    0x79, 0xa, 0x54, 0xa9, 0x4c, 0x82, 0x8, 0x12,
    0x45, 0xb, 0xf0,

    /* U+0033 "3" */
    0x7a, 0x1c, 0x71, 0x9, 0xc0, 0x81, 0xc6, 0x18,
    0x9e,

    /* U+0034 "4" */
    0x10, 0x20, 0x41, 0x2, 0x85, 0x12, 0x24, 0x8b,
    0xfc, 0x20, 0xe0,

    /* U+0035 "5" */
    0x3, 0xe8, 0x20, 0x93, 0x20, 0x41, 0xc6, 0x18,
    0x9c,

    /* U+0036 "6" */
    0x79, 0x38, 0xe0, 0x93, 0xa8, 0x61, 0x86, 0x14,
    0x9e,

    /* U+0037 "7" */
    0xfe, 0x28, 0xa4, 0x10, 0x42, 0x8, 0x20, 0x82,
    0x8,

    /* U+0038 "8" */
    0x79, 0xa, 0x14, 0x2c, 0x8e, 0x17, 0x43, 0x83,
    0x6, 0x13, 0xc0,

    /* U+0039 "9" */
    0x72, 0x28, 0xa1, 0x86, 0x14, 0xcd, 0x5, 0x24,
    0xbc,

    /* U+003A ":" */
    0xc3,

    /* U+003B ";" */
    0xf0, 0xf, 0x40,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003F "?" */
    0x74, 0x6b, 0x55, 0x10, 0x88, 0x51, 0x8, 0x40,

    /* U+0041 "A" */
    0x4, 0x0, 0x80, 0x30, 0x7, 0x1, 0x60, 0x24,
    0x4, 0xc0, 0x98, 0x1f, 0x4, 0x20, 0x86, 0x30,
    0xe0,

    /* U+0042 "B" */
    0x7f, 0x10, 0x48, 0x24, 0x12, 0x11, 0xf0, 0x8c,
    0x41, 0x20, 0x90, 0x48, 0x4f, 0xe0,

    /* U+0043 "C" */
    0x39, 0x47, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81,
    0x81, 0x81, 0x83, 0x7d,

    /* U+0044 "D" */
    0x7e, 0x10, 0x88, 0x44, 0x12, 0x9, 0x4, 0x82,
    0x41, 0x20, 0x90, 0x88, 0x4f, 0xc0,

    /* U+0045 "E" */
    0x7f, 0x90, 0x48, 0x24, 0x12, 0x41, 0xe0, 0x90,
    0x41, 0x20, 0x90, 0x48, 0x2f, 0xf0,

    /* U+0046 "F" */
    0x7f, 0x90, 0x48, 0x24, 0x12, 0x49, 0xe0, 0x90,
    0x40, 0x20, 0x10, 0x8, 0xe, 0x0,

    /* U+0047 "G" */
    0x78, 0x23, 0x20, 0x90, 0x48, 0x4, 0x2, 0x3f,
    0x4, 0x82, 0x41, 0x20, 0x8f, 0x80,

    /* U+0048 "H" */
    0x71, 0xc4, 0x10, 0x82, 0x10, 0x42, 0x8, 0x7f,
    0x8, 0x21, 0x4, 0x20, 0x84, 0x10, 0x82, 0x38,
    0xe0,

    /* U+0049 "I" */
    0x71, 0x8, 0x42, 0x10, 0x84, 0x21, 0x8, 0xe0,

    /* U+004A "J" */
    0x1c, 0x10, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,
    0x91, 0x27, 0x80,

    /* U+004B "K" */
    0x71, 0x88, 0x82, 0x40, 0x90, 0x28, 0xb, 0x3,
    0x40, 0x98, 0x26, 0x8, 0x82, 0x31, 0xce,

    /* U+004C "L" */
    0x70, 0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x80,
    0x41, 0x20, 0x90, 0x48, 0x6f, 0xf0,

    /* U+004D "M" */
    0x70, 0x63, 0x8c, 0x38, 0xc2, 0x94, 0x29, 0x42,
    0xd4, 0x25, 0x42, 0x64, 0x26, 0x42, 0x64, 0x24,
    0x47, 0xe,

    /* U+004E "N" */
    0x71, 0x8c, 0x43, 0x90, 0xa4, 0x29, 0x9, 0x42,
    0x50, 0x94, 0x23, 0x8, 0xc2, 0x11, 0xc4,

    /* U+004F "O" */
    0x38, 0x8a, 0x14, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x9, 0x11, 0xc0,

    /* U+0050 "P" */
    0x7e, 0x10, 0xc8, 0x24, 0x12, 0x9, 0x8, 0xf8,
    0x40, 0x20, 0x10, 0x8, 0xe, 0x0,

    /* U+0051 "Q" */
    0x3c, 0x42, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x82, 0x44, 0x18, 0x8, 0x6,

    /* U+0052 "R" */
    0x7f, 0x4, 0x10, 0x82, 0x10, 0x42, 0x10, 0x7c,
    0x8, 0xc1, 0x8, 0x21, 0x84, 0x30, 0x86, 0x38,
    0x60,

    /* U+0053 "S" */
    0x71, 0x1a, 0x16, 0x2e, 0xf, 0x7, 0x7, 0x83,
    0x7, 0x9, 0xe0,

    /* U+0054 "T" */
    0xff, 0xc4, 0x62, 0x31, 0x18, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x3, 0x80,

    /* U+0055 "U" */
    0x71, 0xc4, 0x10, 0x82, 0x10, 0x42, 0x8, 0x41,
    0x8, 0x21, 0x4, 0x20, 0x84, 0x10, 0x82, 0xf,
    0x80,

    /* U+0056 "V" */
    0x71, 0x8c, 0x41, 0x10, 0x44, 0x19, 0x6, 0x80,
    0xa0, 0x28, 0xe, 0x1, 0x0, 0x40, 0x10,

    /* U+0057 "W" */
    0x67, 0x33, 0x11, 0x8, 0xc8, 0x46, 0x42, 0x52,
    0x1a, 0xa0, 0x57, 0x3, 0x18, 0x18, 0xc0, 0xc6,
    0x2, 0x20, 0x0, 0x0,

    /* U+0058 "X" */
    0x63, 0x8, 0x83, 0x40, 0x50, 0x18, 0x2, 0x0,
    0xc0, 0x50, 0x26, 0x8, 0x84, 0x31, 0x8e,

    /* U+0059 "Y" */
    0x63, 0x11, 0xc, 0x82, 0x81, 0x40, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x3, 0x80,

    /* U+005A "Z" */
    0xfd, 0xa, 0x34, 0x41, 0x82, 0xc, 0x10, 0x62,
    0x85, 0xf, 0xf0,

    /* U+005C "\\" */
    0x40, 0x10, 0x2, 0x0, 0x40, 0x10, 0x2, 0x0,
    0x40, 0x10, 0x2, 0x0, 0x40, 0x8, 0x2,

    /* U+005E "^" */
    0x6, 0x90,

    /* U+0060 "`" */
    0x88,

    /* U+0061 "a" */
    0xf3, 0x20, 0x8e, 0xca, 0x28, 0x9f,

    /* U+0062 "b" */
    0x40, 0x81, 0x2, 0x7, 0xc8, 0x90, 0xa1, 0x42,
    0x85, 0x13, 0xc0,

    /* U+0063 "c" */
    0x72, 0x29, 0xa0, 0x82, 0x8, 0x9e,

    /* U+0064 "d" */
    0xc, 0x8, 0x10, 0x27, 0x51, 0xa1, 0x42, 0x85,
    0xa, 0x13, 0xe0,

    /* U+0065 "e" */
    0x74, 0x63, 0xf8, 0x42, 0x2e,

    /* U+0066 "f" */
    0x72, 0xd0, 0x84, 0x21, 0x8, 0x42, 0x10, 0x80,

    /* U+0067 "g" */
    0x7e, 0x28, 0xa2, 0xf2, 0x8, 0x3e, 0x8b, 0xe0,

    /* U+0068 "h" */
    0x40, 0x81, 0x2, 0x7, 0xc8, 0x91, 0x22, 0x44,
    0x89, 0x12, 0x20,

    /* U+0069 "i" */
    0x48, 0x4, 0x92, 0x49, 0x20,

    /* U+006A "j" */
    0x11, 0x0, 0x11, 0x11, 0x11, 0x11, 0x5e,

    /* U+006B "k" */
    0x40, 0x81, 0x2, 0x4, 0xc9, 0x14, 0x28, 0x70,
    0x91, 0x22, 0x20,

    /* U+006C "l" */
    0x49, 0x24, 0x92, 0x49, 0x20,

    /* U+006D "m" */
    0x7b, 0x88, 0x89, 0x11, 0x22, 0x24, 0x44, 0x88,
    0x91, 0x12, 0x22,

    /* U+006E "n" */
    0x78, 0x89, 0x12, 0x24, 0x48, 0x91, 0x22,

    /* U+006F "o" */
    0x7a, 0x28, 0x61, 0x86, 0x18, 0x9e,

    /* U+0070 "p" */
    0x78, 0x89, 0xa, 0x14, 0x28, 0x51, 0x34, 0x50,
    0xc0,

    /* U+0071 "q" */
    0x75, 0x1a, 0x14, 0x28, 0x50, 0xa1, 0x2e, 0x24,
    0x18,

    /* U+0072 "r" */
    0x7a, 0x50, 0x84, 0x21, 0x8,

    /* U+0073 "s" */
    0xf4, 0xb0, 0xe3, 0x86, 0x2e,

    /* U+0074 "t" */
    0x44, 0x44, 0x44, 0x44, 0x44, 0x70,

    /* U+0075 "u" */
    0x44, 0x89, 0x12, 0x24, 0x48, 0x91, 0x3e,

    /* U+0076 "v" */
    0xc4, 0x91, 0x23, 0x43, 0x6, 0xc, 0x10,

    /* U+0077 "w" */
    0x64, 0x89, 0x22, 0x48, 0x9c, 0x1b, 0x4, 0xc1,
    0x20, 0x48,

    /* U+0078 "x" */
    0x64, 0x28, 0x18, 0x10, 0x18, 0x2c, 0x44, 0x46,

    /* U+0079 "y" */
    0x62, 0x24, 0x24, 0x14, 0x18, 0x18, 0x8, 0x10,
    0x50, 0x60,

    /* U+007A "z" */
    0xfc, 0x84, 0x46, 0x23, 0x3f,

    /* U+007E "~" */
    0x60, 0x38
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 69, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 63, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 74, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 116, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 149, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 32, .adv_w = 41, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 33, .adv_w = 47, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 47, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 47, .adv_w = 86, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 51, .adv_w = 55, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 52, .adv_w = 95, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 53, .adv_w = 49, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 118, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 86, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 114, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 115, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 108, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 112, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 106, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 116, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 113, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 51, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 39, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 168, .adv_w = 82, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 170, .adv_w = 106, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 172, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 154, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 147, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 147, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 185, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 84, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 111, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 148, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 198, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 167, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 138, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 148, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 143, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 414, .adv_w = 178, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 119, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 145, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 175, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 230, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 132, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 565, .adv_w = 112, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 566, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 123, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 123, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 87, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 621, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 632, .adv_w = 68, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 57, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 644, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 71, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 204, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 137, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 693, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 702, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 88, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 78, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 718, .adv_w = 135, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 167, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 129, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 760, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 111, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 8}
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
    -20, -17, -8, -15, -15, -13, -9, -13,
    -8, -21, -23, -5, -5, -27, -28, -36,
    -62, -59, -36, -11, -15, -11, -8, -23,
    -8, -9, -17, -9, -13, -17, -9, -5,
    -8, -13, -9, -26, -13, -13, -15, -5,
    -15, -13, -15, -13, -17, -19, -15, -21,
    -24, -13, -11, -11, -5, -34, -21, -15,
    -13, -11, -15, -17, -15, -9, -23, -19,
    -17, -20, -19, -11, -20, -23, -19, -23,
    -23, -23, -25, -25, -13, -13, -15, -13,
    -13, -13, -19, -20, -17, -19, -20, -19,
    -21, -8, -5, -5, -19, -9, -9, -13,
    -11, -19, -13, -15, -19, -13, -13, -17,
    -19, -21, -15, -15, -11, -21, -19, -23,
    -19, -25, -23, -9, -30, -8, -11, -17,
    -21, -8, -20, -47, -43, -36, -39, -39,
    -5, -17, -13, -8, -20, -9, -19, -19,
    -23, -21, -21, -25, -13, -17, -25, -25,
    -15, -4, -8, -5, -25, -32, -19, -19,
    -25, -23, -23, -30, -25, -32, -21, -21,
    -15, -4, -15, -21, -25, -24, -36, -28,
    -40, -4, -11, -9, -11, -9, -4, -4,
    -5, -5, -41, -9, -15, -11, -19, -15,
    -23, -4, -20, -23, -21, -19, -17, -8,
    -15, -15, -5, -13, -5, -21, -11, -8,
    -21, -11, -23, -28, -21, -26, -2, -25,
    -28, -8, -4, -23, -19, -26, -34, -40,
    -36, -34, -13, -19, -20, -28, -30, -30,
    -5, -25, -13, -8, -11, -11, -9, -8,
    -8, -11, -11, -13, -9, -8, -11, -11,
    -4, -8, -9, 5, -9, -5, -13, -15,
    -13, -9, -9, -26, -17, -5, -17, -17,
    -2, -8, -4, -4, -34, -21, -19, -19,
    -5, -11, -23, -23, -23, -21, -15, -23,
    -15, -17, -25, -25, -26, -25, -21, -21,
    -25, -23, -21, -23, -25, -23, -25, -23,
    -46, -43, -70, -21, -23, -27, -30, -28,
    -5, -23, -36, -34, -30, -40, -13, -13,
    -30, -17, -28, -36, -34, -30, -32, -34,
    -40, -30, -55, -21, -19, -24, -13, -36,
    -34, -15, -38, -45, -15, -34, -34, -30,
    -34, -36, -21, -30, -32, -36, -23, -15,
    -25, -34, -28, -17, -30, -32, -40, -15,
    -32, -36, -34, -15, -38, -40, -39, -30,
    -28, -4, -5, -2, -4, -6, -6, -8,
    -3, -6, -8, -6, -8, -8, -8, -5,
    -6, -8, -13, -20, -32, -21, -6, -16,
    -7, -9, -5, -9, -7, -12, 5, -6,
    -3, -6, -6, -8, -19, -9, -9, -12,
    -14, -7, -5, -9, -2, -12, -8, -6,
    -9, -7, -8, -11, -6, -13, -14, -8,
    -11, -6, -10, -9, -9, -11, -11, -9,
    -17, -23, -24, -19, -21, -17, -9, -8,
    -13, -9, -14, -16, -3, -8, -16, -14,
    -15, -5, -14, -9, -11, -9, -21, -5,
    -8, -8, -16, -8, -6, -5, -9, -13,
    -5, -9, -30, -26, -35, -24, -16, -19,
    -14, -12, -17, -29, -25, -5, -16, -14
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
const lv_font_t ui_font_dubi2 = {
#else
lv_font_t ui_font_dubi2 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_DUBI2*/

