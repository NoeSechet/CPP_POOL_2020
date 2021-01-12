/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct {
    Class base;
    int x;
    int y;
} PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid");
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    if (!this)
        raise("Invalid");
}

static char *point_string(PointClass *this)
{
    size_t size = snprintf(NULL, 0, "<%s (%i, %i)>", \
this->base.__name__, this->x, this->y);
    char *buffer = malloc(sizeof(char) * (size + 1));

    if (buffer == NULL)
        raise("malloc failed float string\n");

    snprintf(buffer, size + 1, "<%s (%i, %i)>", \
this->base.__name__, this->x, this->y);
    return buffer;
}

static PointClass *point_add(PointClass *one, PointClass *two)
{
    PointClass *res_point = new(Point, 0, 0);

    res_point->x = one->x + two->x;
    res_point->y = one->y + two->y;
    return res_point;
}

static PointClass *point_sub(PointClass *one, PointClass *two)
{
    PointClass *res_point = new(Point, 0, 0);

    res_point->x = one->x - two->x;
    res_point->y = one->y - two->y;
    return res_point;
}

static const PointClass _description = {
    {
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&point_string,
        .__add__ = (binary_operator_t)&point_add,
        .__sub__ = (binary_operator_t)&point_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class *Point = (const Class *)&_description;
