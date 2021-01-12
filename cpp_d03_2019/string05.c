/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string05
*/

#include "string.h"

int size(const string_t *this)
{
    if (this == NULL || this->str == NULL)
        return (-1);
    return (strlen(this->str));
}