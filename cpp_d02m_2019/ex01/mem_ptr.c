/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** mem_ptr
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mem_ptr.h"

void add_str(const char *str1, const char *str2, char **res)
{
    size_t length = strlen(str1) + strlen(str2);

    char *truc = malloc(sizeof(char) * length);
    if (truc == NULL)
        return;

    strcat(truc, str1);
    strcat(truc, str2);
    *res = truc;
}

void add_str_struct(str_op_t *str_op)
{
    size_t length = strlen(str_op->str1) + strlen(str_op->str2);

    char *truc = malloc(sizeof(char) * length);

    if (truc == NULL)
        return;

    strcat(truc, str_op->str1);
    strcat(truc, str_op->str2);
    str_op->res = truc;
}