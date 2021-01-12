/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string11
*/

#include "string.h"

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    return (insert_c(this, pos, str->str));
}

void insert_c(string_t *this, size_t pos, const char *str)
{
    size_t comb_len = strlen(this->str) + strlen(str);
    char *res = malloc(sizeof(char) * (comb_len + 1));
    int i = 0;
    int j = 0;

    if (!this || !str || pos > strlen(this->str) - 1)
        return;

    for (; i < pos; i += 1)
        res[i] = this->str[i];
    j = i;
    for (int k = 0; str[k] != '\0'; k += 1, i += 1)
        res[i] = str[k];
    for (; this->str[j] != '\0'; j += 1, i += 1)
        res[i] = this->str[j];
    res[i] = '\0';
    this->string_destroy(this);
    this->str = res;
}