/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** drawing
*/

#include "bitmap.h"
#include "drawing.h"

void draw_square(uint32_t **img, const point_t *origin,
size_t size, uint32_t color)
{
    for (size_t i = origin->x; i < size + origin->x; i += 1) {
        for (size_t j = origin->y; j < size + origin->y; j += 1) {
            img[i][j] = color;
        }
    }
}