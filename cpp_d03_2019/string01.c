/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string01
*/

#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    if (this && str != NULL) {
        string_destroy(this);
        this->str = strdup(str->str);
    }
}

void assign_c(string_t *this, const char *s)
{
    if (this && this->str) {
        string_destroy(this);
    }
    this->str = strdup(s);
}