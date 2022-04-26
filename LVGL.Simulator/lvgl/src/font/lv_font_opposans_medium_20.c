/*******************************************************************************
 * Size: 20 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_OPPOSANS_MEDIUM_20
#define LV_FONT_OPPOSANS_MEDIUM_20 1
#endif

#if LV_FONT_OPPOSANS_MEDIUM_20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+4E2D "中" */
    0x0, 0x0, 0x0, 0xb, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0x0,
    0x12, 0x22, 0x22, 0x2f, 0xe2, 0x22, 0x22, 0x21,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0xdf, 0xaa, 0xaa, 0xaf, 0xfa, 0xaa, 0xaa, 0xfc,
    0xdf, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0xfc,
    0xdf, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0xfc,
    0xdf, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0xfc,
    0xdf, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0xfc,
    0xdf, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x1, 0xfc,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0xac, 0xcc, 0xcc, 0xcf, 0xfc, 0xcc, 0xcc, 0xc9,
    0x0, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xd0, 0x0, 0x0, 0x0,

    /* U+4F60 "你" */
    0x0, 0x0, 0x0, 0x0, 0x1, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0x30, 0xa, 0xf3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xde, 0x0,
    0xf, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xf9, 0x0, 0x7f, 0xc9, 0x99, 0x99, 0x99, 0x60,
    0x0, 0x8, 0xf2, 0x0, 0xef, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0xe, 0xd0, 0x6, 0xf7, 0x0,
    0x0, 0x0, 0x6f, 0x80, 0x0, 0x6f, 0xc0, 0xe,
    0xe0, 0x0, 0x52, 0x0, 0xcf, 0x20, 0x0, 0xef,
    0xc0, 0x8f, 0x60, 0x1, 0xf9, 0x5, 0xf9, 0x0,
    0x6, 0xff, 0xc0, 0xdc, 0x0, 0x1, 0xf9, 0x0,
    0x61, 0x0, 0xe, 0xef, 0xc0, 0x1, 0x10, 0x1,
    0xf9, 0x0, 0x0, 0x0, 0x7f, 0x6e, 0xc0, 0x0,
    0xaf, 0x11, 0xf9, 0x1e, 0x80, 0x0, 0x6, 0xe,
    0xc0, 0x0, 0xfc, 0x1, 0xf9, 0xc, 0xf1, 0x0,
    0x0, 0xe, 0xc0, 0x6, 0xf6, 0x1, 0xf9, 0x4,
    0xf7, 0x0, 0x0, 0xe, 0xc0, 0xc, 0xf0, 0x1,
    0xf9, 0x0, 0xde, 0x0, 0x0, 0xe, 0xc0, 0x4f,
    0x90, 0x1, 0xf9, 0x0, 0x7f, 0x50, 0x0, 0xe,
    0xc0, 0xcf, 0x20, 0x1, 0xf9, 0x0, 0x1f, 0xb0,
    0x0, 0xe, 0xc4, 0xfb, 0x0, 0x1, 0xf9, 0x0,
    0xa, 0xf1, 0x0, 0xe, 0xc6, 0xf2, 0x0, 0x2,
    0xf8, 0x0, 0x5, 0xf4, 0x0, 0xe, 0xc0, 0x0,
    0xd, 0xef, 0xf6, 0x0, 0x0, 0x10, 0x0, 0xe,
    0xc0, 0x0, 0xa, 0xcb, 0x70, 0x0, 0x0, 0x0,

    /* U+56FD "国" */
    0x8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x80, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf1, 0xf, 0xb0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xa, 0xf1, 0xf, 0xb0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xf1, 0xf, 0xb0, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xa, 0xf1, 0xf, 0xb0, 0x88,
    0x88, 0xfd, 0x88, 0x88, 0xa, 0xf1, 0xf, 0xb0,
    0x0, 0x0, 0xeb, 0x0, 0x0, 0xa, 0xf1, 0xf,
    0xb0, 0x0, 0x0, 0xeb, 0x0, 0x0, 0xa, 0xf1,
    0xf, 0xb0, 0xbf, 0xff, 0xff, 0xff, 0xfc, 0xa,
    0xf1, 0xf, 0xb0, 0x68, 0x88, 0xfd, 0x89, 0x87,
    0xa, 0xf1, 0xf, 0xb0, 0x0, 0x0, 0xeb, 0xe,
    0x70, 0xa, 0xf1, 0xf, 0xb0, 0x0, 0x0, 0xeb,
    0x7, 0xf3, 0xa, 0xf1, 0xf, 0xb0, 0x0, 0x0,
    0xeb, 0x0, 0xa2, 0xa, 0xf1, 0xf, 0xb8, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x8a, 0xf1, 0xf, 0xb4,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x4a, 0xf1, 0xf,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xf1,
    0xf, 0xea, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xae,
    0xf1, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf1,

    /* U+597D "好" */
    0x0, 0x2, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xf3, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xf1, 0x0,
    0x8, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0xb,
    0xf0, 0x0, 0x5, 0xbb, 0xbb, 0xbb, 0xff, 0x70,
    0xa, 0xbf, 0xfb, 0xbb, 0x70, 0x0, 0x0, 0x8,
    0xfb, 0x0, 0xe, 0xff, 0xff, 0xff, 0xa0, 0x0,
    0x0, 0x8f, 0xb0, 0x0, 0x0, 0x3f, 0x80, 0x1f,
    0x80, 0x0, 0xa, 0xfa, 0x0, 0x0, 0x0, 0x5f,
    0x50, 0x3f, 0x60, 0x0, 0xf, 0xc0, 0x0, 0x0,
    0x0, 0x8f, 0x20, 0x6f, 0x40, 0x0, 0xf, 0xb0,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x9f, 0x5d, 0xdd,
    0xdf, 0xfd, 0xdd, 0xd3, 0x0, 0xeb, 0x0, 0xdd,
    0x5f, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x2, 0xfb,
    0x2, 0xf9, 0x0, 0x0, 0xf, 0xb0, 0x0, 0x0,
    0x1, 0xcf, 0xd9, 0xf4, 0x0, 0x0, 0xf, 0xb0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xe0, 0x0, 0x0,
    0xf, 0xb0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xf7,
    0x0, 0x0, 0xf, 0xb0, 0x0, 0x0, 0x0, 0x8,
    0xfc, 0xef, 0xa0, 0x0, 0xf, 0xb0, 0x0, 0x0,
    0x0, 0x8f, 0xd1, 0x2d, 0xf3, 0x0, 0x1f, 0xb0,
    0x0, 0x0, 0xa, 0xfd, 0x10, 0x1, 0x40, 0xbc,
    0xef, 0x90, 0x0, 0x0, 0x1d, 0xc1, 0x0, 0x0,
    0x0, 0xbf, 0xfb, 0x10, 0x0, 0x0, 0x1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 320, .box_w = 16, .box_h = 19, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 152, .adv_w = 320, .box_w = 20, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 352, .adv_w = 320, .box_w = 18, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 514, .adv_w = 320, .box_w = 20, .box_h = 20, .ofs_x = 0, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x133, 0x8d0, 0xb50
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 20013, .range_length = 2897, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
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
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
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
const lv_font_t lv_font_opposans_medium_20 = {
#else
lv_font_t lv_font_opposans_medium_20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_OPPOSANS_MEDIUM_20*/
