/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list
*/

#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

unsigned int double_list_get_size(double_list_t list)
{
    int length = 0;
    for (double_list_t temp = list; temp != NULL; temp = temp->next) {
        length += 1;
    }
    return (length);
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return (true);
    else
        return (false);
}

void double_list_dump(double_list_t list)
{
    for (double_list_t temp = list; temp != NULL; temp = temp->next) {
        printf("%f\n", temp->value);
    }
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t new = malloc(sizeof(*new));
    if (new == NULL)
        return (0);
    new->next = *front_ptr;
    new->value = elem;
    *front_ptr = new;
    return (1);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t new = malloc(sizeof(*new));
    double_list_t temp = *front_ptr;

    if (new == NULL)
        return (false);
    new->value = elem;
    new->next = NULL;

    if (double_list_get_size(*front_ptr) == 0) {
        *front_ptr = new;
        return (true);
    }
    for (; temp->next != NULL; temp = temp->next);

    temp->next = new;
    return (true);
}