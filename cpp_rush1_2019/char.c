/*
** EPITECH PROJECT, 2020
** 
** File description:
** char.c
*/

#include <stdio.h>
#include "char.h"
#include "new.h"

typedef struct {
    Class base;
    char x;
} CharClass;

static void char_ctor(CharClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid");
    this->x = va_arg(*args, int);
}

static void char_dtor(CharClass *this)
{
    if (!this)
        raise("Invalid");
}

static char *char_string(CharClass *this)
{
    size_t size = snprintf(NULL, 0, "<%s (%c)>", \
this->base.__name__, this->x);
    char *buffer = malloc(sizeof(char) * (size + 1));

    if (buffer == NULL)
        raise("malloc failed\n");
    snprintf(buffer, size + 1, "<%s (%c)>", \
this->base.__name__, this->x);
    return buffer;
}

static CharClass *char_add(CharClass *one, CharClass *two)
{
    CharClass *res_char = new(Char, 0);

    if (!one || !two)
        return (NULL);
    res_char->x = one->x + two->x;
    return res_char;
}

static CharClass *char_sub(CharClass *one, CharClass *two)
{
    CharClass *res_char = new(Char, 0);

    if (!one || !two)
        return (NULL);
    res_char->x = one->x - two->x;
    return res_char;
}

static CharClass *char_mul(CharClass *one, CharClass *two)
{
    CharClass *res_char = new(Char, 0);

    if (!one || !two)
        return (NULL);
    res_char->x = one->x * two->x;
    return res_char;
}

static CharClass *char_div(CharClass *one, CharClass *two)
{
    CharClass *res_char = NULL;

    if (!one || !two)
        return (NULL);
    if (two->x == 0) {
        raise("Invalid division by 0\n");
        return NULL;
    }
    res_char = new(Char, 0);
    res_char->x = one->x / two->x;
    return res_char;
}

static bool char_eq(const CharClass *one, const CharClass *two)
{
    if (!one || !two)
        return false;
    return (one->x == two->x);
}

static bool char_gt(const CharClass *one, const CharClass *two)
{
    if (!one || !two)
        return false;
    return (one->x > two->x);
}

static bool char_lt(const CharClass *one, const CharClass *two)
{
    if (!one || !two)
        return false;
    return (one->x < two->x);
}

static const CharClass _description = {
    {
        .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&char_ctor,
        .__dtor__ = (dtor_t)&char_dtor,
        .__str__ = (to_string_t)&char_string,
        .__add__ = (binary_operator_t)&char_add,
        .__sub__ = (binary_operator_t)&char_sub,
        .__mul__ = (binary_operator_t)&char_mul,
        .__div__ = (binary_operator_t)&char_div,
        .__eq__ = (binary_comparator_t)&char_eq,
        .__gt__ = (binary_comparator_t)&char_gt,
        .__lt__ = (binary_comparator_t)&char_lt
    },
    .x = 0,
};

const Class *Char = (const Class *)&_description;