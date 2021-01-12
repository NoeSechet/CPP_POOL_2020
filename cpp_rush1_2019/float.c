/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** float
*/


#include <stdio.h>
#include "float.h"
#include "new.h"

typedef struct {
    Class base;
    float x;
} FloatClass;

static void float_ctor(FloatClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid");
    this->x = (float)va_arg(*args, double);
}

static void float_dtor(FloatClass *this)
{
    if (!this)
        raise("Invalid");
}

static char *float_string(FloatClass *this)
{
    size_t size = snprintf(NULL, 0, "<%s (%f)>", \
this->base.__name__, this->x);
    char *buffer = malloc(sizeof(char) * (size + 1));

    if (buffer == NULL)
        raise("malloc failed float string\n");
    snprintf(buffer, size + 1, "<%s (%f)>", \
this->base.__name__, this->x);
    return buffer;
}

static FloatClass *float_add(FloatClass *one, FloatClass *two)
{
    FloatClass *res_float = NULL;

    if (!one || !two)
        return NULL;
    res_float = new(Float, 0);
    res_float->x = one->x + two->x;
    return res_float;
}

static FloatClass *float_sub(FloatClass *one, FloatClass *two)
{
    FloatClass *res_float = NULL;

    if (!one || !two)
        return NULL;
    res_float = new(Float, 0);
    res_float->x = one->x - two->x;
    return res_float;
}

static FloatClass *float_mul(FloatClass *one, FloatClass *two)
{
    FloatClass *res_float = NULL;

    if (!one || !two)
        return NULL;

    res_float = new(Float, 0);
    res_float->x = one->x * two->x;
    return res_float;
}

static FloatClass *float_div(FloatClass *one, FloatClass *two)
{
    FloatClass *res_float = NULL;

    if (!one || !two || two->x == 0) {
        if (two->x == 0)
            raise("Invalid division by 0\n");
        return NULL;
    }

    res_float = new(Float, 0);
    res_float->x = one->x / two->x;
    return res_float;
}

static bool float_eq(FloatClass *one, FloatClass *two)
{
    if (!one || !two)
        return false;
    return (one->x == two->x);
}

static bool float_gt(FloatClass *one, FloatClass *two)
{
    if (!one || !two)
        return false;
    return (one->x > two->x);
}

static bool float_lt(FloatClass *one, FloatClass *two)
{
    if (!one || !two)
        return false;
    return (one->x < two->x);
}

static const FloatClass _description = {
    {
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&float_ctor,
        .__dtor__ = (dtor_t)&float_dtor,
        .__str__ = (to_string_t)&float_string,
        .__add__ = (binary_operator_t)&float_add,
        .__sub__ = (binary_operator_t)&float_sub,
        .__mul__ = (binary_operator_t)&float_mul,
        .__div__ = (binary_operator_t)&float_div,
        .__eq__ = (binary_comparator_t)&float_eq,
        .__gt__ = (binary_comparator_t)&float_gt,
        .__lt__ = (binary_comparator_t)&float_lt
    },
    .x = 0,
};

const Class *Float = (const Class *)&_description;