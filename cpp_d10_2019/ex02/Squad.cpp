/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** Squad
*/

#include "Squad.hpp"

Squad::Squad()
{

}

Squad::Squad(const Squad &toCopy)
{
    for (size_t i = 0; i < toCopy.m_listVaissel.size(); i += 1) {
        this->m_listVaissel.push_back(toCopy.m_listVaissel[i]->clone());
    }
}

Squad::~Squad()
{
    for (size_t i = 0; i < this->m_listVaissel.size(); i += 1) {
        delete(this->m_listVaissel[i]);
    }
}

ISpaceMarine* Squad::getUnit(int spot)
{
    if (spot < 0 || (size_t)spot > this->m_listVaissel.size())
        return nullptr;

    return m_listVaissel[spot];
}

bool Squad::isInSquad(ISpaceMarine *newElem)
{
    for (size_t i = 0; i < this->m_listVaissel.size(); i += 1) {
        if (this->m_listVaissel[i] == newElem)
            return true;
    }
    return false;

}

int Squad::push(ISpaceMarine *newElem)
{
    if (!isInSquad(newElem)) {
        this->m_listVaissel.push_back(newElem);
    }
    return this->m_listVaissel.size();
}

Squad &Squad::operator=(const Squad &copy)
{
    for (size_t i = 0; i < this->m_listVaissel.size(); i += 1) {
        delete(this->m_listVaissel[i]);
    }
    this->m_listVaissel.clear();
    for (size_t i = 0; i < copy.m_listVaissel.size(); i += 1) {
        this->m_listVaissel.push_back(copy.m_listVaissel[i]->clone());
    }
    return *this;
}
