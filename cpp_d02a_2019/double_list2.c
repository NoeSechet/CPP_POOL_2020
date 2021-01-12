/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list2
*/

#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
unsigned int position)
{
    double_list_t new = malloc(sizeof(*new));
    size_t length = double_list_get_size(*front_ptr);
    double_list_t temp = *front_ptr;

    new->value = elem;
    new->next = NULL;
    if (position > length || new == NULL)
        return (false);
    if (position == 0)
        return (double_list_add_elem_at_front(front_ptr, elem));
    for (size_t i = 0; i < position - 1; temp = temp->next, i += 1);
    new->next = temp->next;
    temp->next = new;
    return (true);
}

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    if (double_list_is_empty(*front_ptr))
        return (false);
    double_list_t temp = *front_ptr;

    *front_ptr = temp->next;
    return (true);
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    double_list_t temp = *front_ptr;
    int length = 0;

    if ((length = double_list_get_size(*front_ptr)) == 0)
        return (false);
    if ((length = double_list_get_size(*front_ptr)) == 1) {
        *front_ptr = NULL;
        return (true);
    }
    if (temp == NULL || temp->next == NULL)
        return (false);
    for (; temp->next->next != NULL; temp = temp->next);
    temp->next = NULL;
    return (true);
}

bool double_list_del_elem_at_position(double_list_t *front_ptr,
unsigned int position)
{
    size_t length = double_list_get_size(*front_ptr);
    double_list_t temp = *front_ptr;

    if (position > length)
        return (false);
    if (position == 0 || length == 1)
        return (double_list_del_elem_at_front(front_ptr));
    for (size_t i = 0; i < position; temp = temp->next, i += 1);

    temp->next = temp->next;
    return (true);
}