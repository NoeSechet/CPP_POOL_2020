/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list3
*/

#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

double double_list_get_elem_at_front(double_list_t list)
{
    if (list == NULL)
        return (0);
    return (list->value);
}

double double_list_get_elem_at_back(double_list_t list)
{
    double_list_t temp = list;

    if (list == NULL || double_list_get_size(list) == 0)
        return (0);
    for (; temp->next != NULL; temp = temp->next);
    return (temp->value);
}

double double_list_get_elem_at_position(double_list_t list,
unsigned int position)
{
    size_t length = double_list_get_size(list);
    double_list_t temp = list;

    if (position > length)
        return (false);
    if (position == 0)
        return (double_list_get_elem_at_front(list));
    for (size_t i = 1; i < position; temp = temp->next, i += 1);

    return (temp->value);
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
double value)
{
    double_list_t temp = list;
    for (; temp != NULL; temp = temp->next)
        if (temp->value != value)
            return (temp);
    return (NULL);
}