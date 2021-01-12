/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaNurseList
*/

#include "KoalaNurseList.hpp"

KoalaNurseList::KoalaNurseList(KoalaNurse *new_Nurse)
{
    m_Nurse = new_Nurse;
    m_next = nullptr;
}

KoalaNurseList::~KoalaNurseList()
{
}

bool KoalaNurseList::isEnd(void)
{
    if (m_next == nullptr) {
        return true;
    }
    return false;
}

void KoalaNurseList::append(KoalaNurseList *new_Nurse)
{
    KoalaNurseList *temp = this;
    if (!new_Nurse)
        return;

    for (; temp->m_next != nullptr; temp = temp->m_next);
    temp->m_next = new_Nurse;
}

KoalaNurse *KoalaNurseList::getFromID(int ID)
{
    KoalaNurseList *temp = this;

    for (; temp->m_Nurse->getID() == ID; temp = temp->m_next);

    return temp->m_Nurse;
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *to_remove)
{
    KoalaNurseList *temp = this;

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

KoalaNurseList *KoalaNurseList::removeFromID(int ID)
{
    KoalaNurseList *temp = this;

    for (; temp != nullptr && temp->m_Nurse && temp->m_Nurse->getID() == ID;
        temp = temp->m_next);
    if (temp && temp->m_Nurse)
        temp->m_Nurse = nullptr;
    return this;
}

void KoalaNurseList::dump(void)
{
    KoalaNurseList *temp = this;

    std::cout << "Nurses: ";

    for (; temp->m_next != nullptr; temp = temp->m_next) {
        if (temp->m_Nurse != nullptr)
            std::cout << temp->m_Nurse->getID() << ", ";
        else
            std::cout << "[nullptr]" << ", ";
    }
    if (temp) {
        if (temp->m_Nurse)
            std::cout << temp->m_Nurse->getID() << ".";
        else
            std::cout << "[nullptr]" << ".";
    }
    std::cout << std::endl;
}