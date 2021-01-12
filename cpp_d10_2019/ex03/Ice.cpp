/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** Ice
*/

#include "Ice.hpp"

Ice::Ice()
    : AMateria("ice")
{
}

Ice::~Ice()
{

}

AMateria *Ice::clone() const
{
    Ice *copy = new Ice();
    copy->m_exp = this->m_exp;
    return copy;
}

void Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
