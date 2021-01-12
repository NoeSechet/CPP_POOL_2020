/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(const ToyType type)
    : m_type(type), m_name("")
{
}

Toy::Toy()
    : m_type(BASIC_TOY), m_name("toy"), m_picture()
{
}

Toy::Toy(const ToyType type, const std::string name, const std::string &file)
    : m_type(type), m_name(name), m_picture(file)
{
}

Toy::~Toy()
{
}


bool Toy::setAscii(const std::string &file)
{
    return this->m_picture.getPictureFromFile(file);
}