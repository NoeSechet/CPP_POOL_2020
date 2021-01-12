/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** SickKoalaList
*/

#include "SickKoalaList.hpp"

SickKoalaList::SickKoalaList(SickKoala *my_koala)
{
    m_Koala = my_koala;
    m_next = nullptr;
}

SickKoalaList::~SickKoalaList()
{
}

bool SickKoalaList::isEnd(void)
{
    if (m_next == nullptr) {
        return true;
    }
    return false;
}

void SickKoalaList::append(SickKoalaList *new_koala)
{
    SickKoalaList *temp = this;
    if (!new_koala)
        return;

    for (; temp->m_next != nullptr; temp = temp->m_next);
    temp->m_next = new_koala;
}

SickKoala *SickKoalaList::getFromName(std::string koala_name)
{
    SickKoalaList *temp = this;

    for (; temp->m_Koala->getName().compare(koala_name); temp = temp->m_next);

    return temp->m_Koala;
}

SickKoalaList *SickKoalaList::remove(SickKoalaList *to_remove)
{
    SickKoalaList *temp = this;

    if (!to_remove)
        return this;

    if (to_remove == this) {
        return temp->m_next;
    }

    for (; temp->m_next != nullptr && temp->m_next != to_remove; temp = temp->m_next);
    if (temp->m_next == to_remove)
        temp->m_next = temp->m_next->m_next;
    return this;
}

SickKoalaList *SickKoalaList::removeFromName(std::string koala_name)
{
    SickKoalaList *temp = this;

    for (; temp != nullptr && temp->m_Koala->getName().compare(koala_name);
        temp = temp->m_next);
    if (temp)
        temp->m_Koala = nullptr;
    return this;
}

SickKoala *SickKoalaList::getContent(void)
{
    return m_Koala;
}

SickKoalaList *SickKoalaList::getNext(void)
{
    return m_next;
}

void SickKoalaList::dump(void)
{
    SickKoalaList *temp = this;

    std::cout << "Patients: ";

    for (; temp->m_next != nullptr; temp = temp->m_next) {
        if (temp->m_Koala != nullptr)
            std::cout << temp->m_Koala->getName() << ", ";
        else
            std::cout << "[nullptr]" << ", ";
    }
    if (temp) {
        if (temp->m_Koala) {
            std::cout << temp->m_Koala->getName() << ".";
        } else {
            std::cout << "[nullptr]" << ".";
        }
    }
    std::cout << std::endl;
}