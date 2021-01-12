/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy()
    : m_type(BASIC_TOY), m_name("toy"), m_picture("")
{
    this->m_picture.data = "";
}

Toy::Toy(const ToyType type, const std::string name, const std::string &file)
    : m_type(type), m_name(name), m_picture(file)
{
}

Toy::Toy(const Toy &toyToCopy)
    : m_type(toyToCopy.m_type), m_name(toyToCopy.m_name), m_picture(toyToCopy.m_picture)
{
}

Toy::~Toy()
{
}

bool Toy::setAscii(const std::string &file)
{
    return this->m_picture.getPictureFromFile(file);
}

Toy &Toy::operator=(const Toy &toCopy)
{
    this->m_name = toCopy.getName();
    this->m_picture = toCopy.getAscii();

    return *this;
}

void Toy::speak(std::string statement)
{
    std::cout << this->m_name << " \"" << statement << "\"" << std::endl;
}

Toy &Toy::operator<<(const std::string s)
{
    this->m_picture.data = s;
    return *this;
}

std::ostream &operator<<(std::ostream &s, const Toy &toy)
{
    s << toy.getName() << std::endl;
    s << toy.getAscii() << std::endl;
    return s;
}