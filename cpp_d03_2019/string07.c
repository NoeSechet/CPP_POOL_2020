/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string07
*/

#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    int i = 0;

    if (pos > strlen(this->str))
        return (0);

    for (; i < n && this->str[pos+i] != '\0'; i += 1) {
        s[i] = this->str[pos+i];
    }
    if (i < n && this->str[pos+i] == '\0') {
        s[i] = '\0';
        i += 1;
    }
    return (i);
}