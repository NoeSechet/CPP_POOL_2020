/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::Fruit(int vitamins, std::string const name)
    : _vitamins(vitamins), m_name(name)
{
}


Fruit::Fruit(const Fruit &fruit)
{
    this->m_name = fruit.m_name;
    this->_vitamins = fruit._vitamins;
}

Fruit::~Fruit()
{
}

Fruit &Fruit::operator=(const Fruit &toCopy)
{
    this->m_name = toCopy.getName();
    this->_vitamins = toCopy.getVitamins();
    return *this;
}
