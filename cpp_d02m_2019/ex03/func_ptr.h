/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** func_ptr
*/

#ifndef FUNC_PTR_H_
#define FUNC_PTR_H_

#include "func_ptr_enum.h"

typedef struct function_ptr_s {
    action_t action_enum;
    void (*function_ptr)(const char *);
} function_ptr_t;

#endif /* !FUNC_PTR_H_ */