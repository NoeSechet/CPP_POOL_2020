/*
** EPITECH PROJECT, 2020
** new.c
** File description:
** create and delete an object class functions
*/

#include "new.h"
#include "player.h"
#include <stddef.h>

Object *va_new(const Class *class, va_list* ap)
{
    Object *new_obj = malloc(class->__size__);

    if (new_obj == NULL)
        raise("Out of memory");
    new_obj = memcpy(new_obj, class, class->__size__);
    if (class->__ctor__ != NULL)
        class->__ctor__(new_obj, ap);
    return new_obj;
}

Object *new(const Class *class, ...)
{
    Object *new_obj = NULL;

    if (class == NULL)
        raise("Class is NULL");
    va_list list_arg;
    va_start(list_arg, class);
    new_obj = va_new(class, &list_arg);
    va_end(list_arg);
    return (new_obj);
}

void delete(Object *ptr)
{
    Class *my_class = malloc(sizeof(Class));

    if (my_class == NULL) {
        if (ptr != NULL)
            free(ptr);
        raise("Out of memory\n");
    }
    if (ptr == NULL) {
        free(my_class);
        raise("ptr is NULL\n");
    }
    my_class = memcpy(my_class, ptr, sizeof(Class));
    if (my_class->__dtor__ != NULL) {
        my_class->__dtor__(ptr);
    }
    free(my_class);
    free(ptr);
}