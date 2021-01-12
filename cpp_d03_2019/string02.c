/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string02
*/

#include "string.h"

void append_s(string_t *this, const string_t *ap)
{
    append_c(this, ap->str);
}

void append_c(string_t *this, const char *ap)
{
    int length = (strlen(this->str) + strlen(ap));
    char *res = malloc(sizeof(int) * length + 1);
    int i = 0;

    if (this->str == NULL)
        return;
    for (; i < strlen(this->str); i += 1)
        res[i] = this->str[i];
    for (int j = 0; i < length; i += 1, j += 1)
        res[i] = ap[j];
    res[length] = '\0';

    free(this->str);
    this->str = NULL;
    this->str = res;
}