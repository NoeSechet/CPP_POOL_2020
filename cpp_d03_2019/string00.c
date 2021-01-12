/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** main
*/

#include "string.h"

void string_init_sec(string_t *this)
{
    this->split_s = &split_s;
    this->split_c = &split_c;
}

void string_init(string_t *this, const char *s)
{
    this->str = strdup(s);
    this->string_destroy = string_destroy;
    this->assign_s = &assign_s;
    this->assign_c = &assign_c;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this-> at= &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_s = &compare_s;
    this->compare_c = &compare_c;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    this->find_s = &find_s;
    this->find_c = &find_c;
    this->insert_s = &insert_s;
    this->insert_c = &insert_c;
    this->to_int = &to_int;
    string_init_sec(this);
}

void string_destroy(string_t *this)
{
    if (this != NULL) {
        if (this->str)
            free((this->str));
        this->str = NULL;
        this = NULL;
    }
}