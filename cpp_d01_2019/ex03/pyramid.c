/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** pyramid
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct vec_s {
    int x;
    int y;
} vec_t;

int count_values(int curr_value, int size, const int **pyramid, vec_t coord)
{
    int value = pyramid[coord.y][coord.x] + curr_value;

    int res1 = 0;
    int res2 = 0;

    coord.y += 1;

    if (coord.y < size) {
        res1 = count_values(value, size, pyramid, coord);
            coord.x += 1;
        res2 = count_values(value, size, pyramid, coord);
        return (res1 > res2 ? res2 : res1);
    }
    return (value);
}

int pyramid_path(int size, const int **map)
{
    vec_t coord = { 0, 0 };

    int val = count_values(0, size, map, coord);

    return (val);
}