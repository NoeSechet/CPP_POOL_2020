/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string03
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    int i = 0;

    if (this == NULL || this->str == NULL ||
        pos > strlen(this->str) - 1) {
            return (-1);
    }
    return (this->str[pos]);
}