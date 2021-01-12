/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** MateriaSource
*/

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (size_t i = 0; i < 4; i++) {
        this->m_listLearnedMateria.push_back(nullptr);
    }
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < this->m_listLearnedMateria.size() && this->m_listLearnedMateria[i]; i += 1) {
        delete this->m_listLearnedMateria[i];
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (size_t i = 0; i < this->m_listLearnedMateria.size() &&
    this->m_listLearnedMateria[i]; i += 1) {
        if (this->m_listLearnedMateria[i]->getType().compare(type) == 0) {
            return this->m_listLearnedMateria[i]->clone();
        }
    }
    return nullptr;
}

void MateriaSource::learnMateria(AMateria *toSave)
{
    for (size_t i = 0; i < this->m_listLearnedMateria.size(); i += 1) {
        if (this->m_listLearnedMateria[i] == nullptr) {
            this->m_listLearnedMateria[i] = toSave->clone();
            return;
        }
    }
}