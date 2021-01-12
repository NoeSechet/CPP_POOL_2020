/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** vertex
*/

#include <stdio.h>
#include "vertex.h"
#include "new.h"

typedef struct {
    Class base;
    int x, y, z;
} VertexClass;

static void vertex_ctor(VertexClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid");
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void vertex_dtor(VertexClass *this)
{
    if (this == NULL)
        raise("Invalid\n");
}

static char *vertex_string(VertexClass *this)
{
    size_t size = snprintf(NULL, 0, "<%s (%i, %i, %i)>", \
this->base.__name__, this->x, this->y, this->z);
    char *buffer = malloc(sizeof(char) * (size + 1));

    if (buffer == NULL)
        raise("malloc failed float string\n");

    snprintf(buffer, size + 1, "<%s (%i, %i, %i)>", \
this->base.__name__, this->x, this->y, this->z);
    return buffer;
}

static VertexClass *vertex_add(VertexClass *one, VertexClass *two)
{
    VertexClass *res_vertex = new(Vertex, 0, 0);

    res_vertex->x = one->x + two->x;
    res_vertex->y = one->y + two->y;
    res_vertex->z = one->z + two->z;
    return res_vertex;
}

static VertexClass *vertex_sub(VertexClass *one, VertexClass *two)
{
    VertexClass *res_vertex = new(Vertex, 0, 0, 0);

    res_vertex->x = one->x - two->x;
    res_vertex->y = one->y - two->y;
    res_vertex->z = one->z - two->z;
    return res_vertex;
}

static const VertexClass _description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&vertex_ctor,
        .__dtor__ = (dtor_t)&vertex_dtor,
        .__str__ = (to_string_t)&vertex_string,
        .__add__ = (binary_operator_t)&vertex_add,
        .__sub__ = (binary_operator_t)&vertex_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0
};

const Class *Vertex = (const Class *)&_description;