/*
** EPITECH PROJECT, 2020
** int.c
** File description:
** int class
*/

#include <stdio.h>
#include "int.h"
#include "new.h"

typedef struct {
    Class base;
    int x;
} IntClass;

static void int_ctor(IntClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid");
    this->x = va_arg(*args, int);
}

static void int_dtor(IntClass *this)
{
    if (!this)
        raise("Invalid");
}

static char *int_string(IntClass *this)
{
    size_t size = snprintf(NULL, 0, "<%s (%i)>", \
this->base.__name__, this->x);
    char *buffer = malloc(sizeof(char) * (size + 1));

    if (buffer == NULL)
        raise("malloc failed float string\n");

    snprintf(buffer, size + 1, "<%s (%i)>", \
this->base.__name__, this->x);
    return buffer;
}

static IntClass *int_add(IntClass *one, IntClass *two)
{
    IntClass *res_int = NULL;

    if (one == NULL || two == NULL)
        return NULL;
    res_int = new(Int, 0);
    res_int->x = one->x + two->x;
    return res_int;
}

static IntClass *int_sub(IntClass *one, IntClass *two)
{
    IntClass *res_int = NULL;

    if (one == NULL || two == NULL)
        return NULL;
    res_int = new(Int, 0);
    res_int->x = one->x - two->x;
    return res_int;
}

static IntClass *int_mul(IntClass *one, IntClass *two)
{
    IntClass *res_int = NULL;

    if (one == NULL || two == NULL)
        return NULL;
    res_int = new(Int, 0);
    res_int->x = one->x * two->x;
    return res_int;
}

static IntClass *int_div(IntClass *one, IntClass *two)
{
    IntClass *res_int = NULL;

    if (one == NULL || two == NULL)
        return NULL;
    if (two->x == 0)
        raise("Invalid division by 0\n");
    res_int = new(Int, 0);
    res_int->x = one->x / two->x;
    return res_int;
}

static bool int_eq(IntClass *one, IntClass *two)
{
    if (one == NULL || two == NULL)
        return false;
    return (one->x == two->x);
}

static bool int_gt(IntClass *one, IntClass *two)
{
    if (one == NULL || two == NULL)
        return false;
    return (one->x > two->x);
}

static bool int_lt(IntClass *one, IntClass *two)
{
    if (one == NULL || two == NULL)
        return false;
    return (one->x < two->x);
}

static const IntClass _description = {
    {
        .__size__ = sizeof(IntClass),
        .__name__ = "Int",
        .__ctor__ = (ctor_t)&int_ctor,
        .__dtor__ = (dtor_t)&int_dtor,
        .__str__ = (to_string_t)&int_string,
        .__add__ = (binary_operator_t)&int_add,
        .__sub__ = (binary_operator_t)&int_sub,
        .__mul__ = (binary_operator_t)&int_mul,
        .__div__ = (binary_operator_t)&int_div,
        .__eq__ = (binary_comparator_t)&int_eq,
        .__gt__ = (binary_comparator_t)&int_gt,
        .__lt__ = (binary_comparator_t)&int_lt
    },
    .x = 0
};

const Class *Int = (const Class *)&_description;