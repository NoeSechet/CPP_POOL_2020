/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** AMateria
*/

#include "AMateria.hpp"

AMateria::AMateria(const std::string & type)
    : m_type(type)
{
    this->m_exp = 0;
}

AMateria::AMateria(const AMateria &getFrom)
    : m_type(getFrom.m_type)
{
    this->m_exp = getFrom.m_exp;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &toCopy)
{
    this->m_exp = toCopy.m_exp;
    return *this;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    this->m_exp += 10;
}