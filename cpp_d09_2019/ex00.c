/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** ex00
*/

#include "ex00.h"

static void cthulhu_initializer(cthulhu_t *this)
{
    this->m_name = strdup("Cthulhu");
    this->m_power = 42;
}

cthulhu_t *new_cthulhu(void)
{
    cthulhu_t *newObj = malloc(sizeof(cthulhu_t));

    printf("----\n");
    cthulhu_initializer(newObj);

    printf("Building Cthulhu\n");

    return newObj;
}

void print_power(cthulhu_t *this)
{
    if (!this)
        return;
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t *this)
{
    if (!this)
        return;
    if (this->m_power < 42) {
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
        return;
    }
    this->m_power -= 42;
    printf("%s attacks and destroys the city\n", this->m_name);
}

void sleeping(cthulhu_t *this)
{
    if (this) {
        this->m_power += 42000;
        printf("%s sleeps\n", this->m_name);
    }
}

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend)
{
    this->m_parent = *new_cthulhu();
    this->m_is_a_legend = _is_A_Legend;
    if (_name)
        this->m_parent.m_name = strdup(_name);
    if (!_is_A_Legend) {
        this->m_parent.m_power = 0;
    }
    printf("Building %s\n", _name);
}

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *newKoala = malloc(sizeof(koala_t));

    koala_initializer(newKoala, name, is_a_legend);

    return newKoala;
}

void eat(koala_t *this)
{
    if (!this)
        return;
    printf("%s eats\n", this->m_parent.m_name);
    this->m_parent.m_power += 42;
}