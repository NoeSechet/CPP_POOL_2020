/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** Cure
*/

#include "Cure.hpp"

Cure::Cure()
    : AMateria("cure")
{
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
    Cure *copy = new Cure();
    copy->m_exp = this->m_exp;
    return (copy);
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
