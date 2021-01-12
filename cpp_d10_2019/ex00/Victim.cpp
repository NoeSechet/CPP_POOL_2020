/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Victim
*/

#include "Victim.hpp"

Victim::Victim(std::string name)
    : _name(name)
{
    std::cout << "Some random victim called " << this->_name <<
        " just popped!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

void Victim::setName(std::string newName)
{
    this->_name = newName;
}

void Victim::printInfo() const
{
    std::cout << "I'm " << this->_name << " and I like otters!" << std::endl;
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!"<< std::endl;
}

std::ostream &operator<<(std::ostream &s, Victim const &victim)
{
    victim.printInfo();
    return s;
}