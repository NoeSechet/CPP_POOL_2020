/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Sorcerer
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
    : _name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title <<
        ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::setName(std::string newName)
{
    this->_name = newName;
}

void Sorcerer::setTitle(std::string newTitle)
{
    this->_title = newTitle;
}

void Sorcerer::printInfo() const
{
    std::cout << "I am " << this->_name << ", " <<
        this->_title << ", and I like ponies!" << std::endl;
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &s, Sorcerer const &sorcerer)
{
    sorcerer.printInfo();
    return s;
}