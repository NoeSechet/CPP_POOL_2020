/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::Fruit(int vitamins, std::string name)
    : _vitamins(vitamins), m_name(name)
{
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
