/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string10
*/

#include "string.h"

int find_s(const string_t *this, const string_t *str , size_t pos)
{
    return (find_c(this, str->str, pos));
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    int i = 0;

    if (pos > strlen(this->str) || strlen(str) > strlen(this->str) - pos) {
        return (-1);
    }
    for (size_t i = 0; this->str[i] != '\0'; i += 1) {
        size_t j = 0;
        for (size_t k = i; str[j] != '\0'; j += 1, k += 1) {
            if (this->str[k] != str[j])
                break;
        }
        if (str[j] == '\0')
            return (i);
    }
    return (-1);
}