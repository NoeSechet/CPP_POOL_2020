/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string name)
    : m_name(name)
{
    for (size_t i = 0; i < 4; i += 1) {
        this->m_listMateria.push_back(nullptr);
    }
}

Character::Character(const Character &toCopy)
    : m_name(toCopy.m_name)
{
    copyListFromCopy(toCopy);
}

Character::~Character()
{
    for (size_t i = 0; i < this->m_listMateria.size() && this->m_listMateria[i]; i += 1) {
        if (this->m_listMateria[i]) {
            delete this->m_listMateria[i];
        }
    }
}

void Character::copyListFromCopy(const Character &toCopy)
{
    for (size_t i = 0; i < toCopy.m_listMateria.size(); i += 1) {
        if (toCopy.m_listMateria[i] != nullptr)
            this->m_listMateria.insert(this->m_listMateria.begin() + i,
                toCopy.m_listMateria[i]->clone());
        else
            this->m_listMateria.insert(this->m_listMateria.begin() + i,
                nullptr);
    }
}

Character Character::operator=(const Character &toCopy)
{
    for (size_t i; this->m_listMateria.size(); i += 1) {
        if (this->m_listMateria[i])
            delete this->m_listMateria[i];
    }
    copyListFromCopy(toCopy);
    return *this;
}

void Character::equip(AMateria* m)
{
    if (m == nullptr)
        return;
    for (size_t i = 0; i < this->m_listMateria.size(); i++) {
        if (this->m_listMateria[i] == nullptr) {
            this->m_listMateria[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || (size_t)idx > this->m_listMateria.size() - 1)
        return;
    this->m_listMateria[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || (size_t)idx > this->m_listMateria.size() - 1 ||
    this->m_listMateria[idx] == nullptr) {
        return;
    }
    this->m_listMateria[idx]->use(target);
}
