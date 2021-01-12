/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** tab_to_2dtab
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int **truc = malloc(sizeof(int *) * length);
    for (int i = 0; i < length; i += 1) {
        truc[i] = malloc(sizeof(int) * width);
        for (int j = 0; j < width; j += 1) {
            truc[i][j] = tab[i * width + j];
        }
    }
    *res = truc;
}