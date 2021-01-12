/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string04
*/

#include "string.h"

void clear(string_t *this)
{
    if (this != NULL && this->str != NULL) {
        free(this->str);
        this->str = NULL;
    }
}