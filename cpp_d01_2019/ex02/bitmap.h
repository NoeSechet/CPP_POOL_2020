/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** bitmap
*/

#ifndef BITMAP_H_
#define BITMAP_H_

#include <stdint.h>
#include <stddef.h>
#include <string.h>

#define MAGIC 0x4D42;
#define APP1 0;
#define APP2 0;
#define HEADER_SIZE 40;
#define COMPRESSION 0;
#define SIZE_PALETTE 0;
#define IMPORTANT_COLORS 0;
#define BPP 32;
#define HORI_RES 0;
#define VERTI_RES 0;
#define NB_ENTRIES 1;

typedef struct __attribute__((packed)) bmp_header_s
{
    uint16_t magic;
    uint32_t size;
    uint16_t _app1;
    uint16_t _app2;
    uint32_t offset;
} bmp_header_t;

typedef struct __attribute__((packed)) bmp_info_header_s
{
    uint32_t size;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bpp;
    uint32_t compression;
    uint32_t raw_data_size;
    uint32_t h_resolution;
    uint32_t v_resolution;
    uint32_t palette_size;
    uint32_t important_colors;
} bmp_info_header_t;

void make_bmp_header(bmp_header_t *header, size_t size);
void make_bmp_info_header(bmp_info_header_t *info_header, size_t size);

#endif /* !BITMAP_H_ */
