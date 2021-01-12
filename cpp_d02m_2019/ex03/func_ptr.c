/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** func_ptr
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func_ptr.h"

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    for (int i = strlen(str) - 1; i > -1; i -= 1) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void print_upper(const char *str)
{
    for (size_t i = 0; i < strlen(str); i += 1) {
        if (str[i] >= 97 && str[i] <= 122) {
            printf("%c", str[i] - 32);
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

void print_42(const char *str)
{
    (void)str;
    printf("42\n");
}

const function_ptr_t mytab[] = {
    {PRINT_NORMAL, print_normal},
    {PRINT_REVERSE, print_reverse},
    {PRINT_UPPER, print_upper},
    {PRINT_42, print_42},
};

void do_action(action_t action, const char *str)
{
    for (int i = 0; i < 4; i += 1) {
        if (action == mytab[i].action_enum) {
            mytab[i].function_ptr(str);
        }
    }
}