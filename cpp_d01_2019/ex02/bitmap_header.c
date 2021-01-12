/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** bitmap_header
*/

#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    memset(header, 0, sizeof(bmp_header_t));

    header->magic = MAGIC;
    header->size = size * size * sizeof(int) + sizeof(bmp_header_t) +
    sizeof(bmp_info_header_t);
    header->_app1 = APP1;
    header->_app2 = APP2;
    header->offset = sizeof(bmp_header_t) + sizeof(bmp_info_header_t);
}

void make_bmp_info_header(bmp_info_header_t *info_header, size_t size)
{
    memset(info_header, 0, sizeof(bmp_info_header_t));

    info_header->size = HEADER_SIZE;
    info_header->width = size;
    info_header->height = size;
    info_header->planes = NB_ENTRIES;
    info_header->bpp = BPP;
    info_header->compression = COMPRESSION;
    info_header->raw_data_size = size * size * 4;
    info_header->h_resolution = HORI_RES;
    info_header->v_resolution = VERTI_RES;
    info_header->palette_size = SIZE_PALETTE;
    info_header->important_colors = IMPORTANT_COLORS;
}