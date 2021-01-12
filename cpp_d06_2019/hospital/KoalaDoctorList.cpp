/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaDoctorList
*/

#include "KoalaDoctorList.hpp"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *new_Doctor)
{
    m_Doctor = new_Doctor;
    m_Next = nullptr;
}

KoalaDoctorList::~KoalaDoctorList()
{
}

bool KoalaDoctorList::isEnd(void)
{
    if (m_Next == nullptr) {
        return true;
    }
    return false;
}

void KoalaDoctorList::append(KoalaDoctorList *new_Doctor)
{
    KoalaDoctorList *temp = this;
    if (!new_Doctor)
        return;

    for (; temp->m_Next != nullptr; temp = temp->m_Next);
    temp->m_Next = new_Doctor;
}

KoalaDoctor *KoalaDoctorList::getFromName(std::string doctor_Name)
{
    KoalaDoctorList *temp = this;

    for (; temp->m_Doctor->getName().compare(doctor_Name); temp = temp->m_Next);

    return temp->m_Doctor;
}

KoalaDoctorList *KoalaDoctorList::remove(KoalaDoctorList *to_remove)
{
    KoalaDoctorList *temp = this;

    if (!to_remove)
        return this;

    if (to_remove == this) {
        return temp->m_Next;
    }

    for (; temp->m_Next != nullptr && temp->m_Next != to_remove; temp = temp->m_Next);
    if (temp->m_Next == to_remove)
        temp->m_Next = temp->m_Next->m_Next;
    return this;
}

KoalaDoctorList *KoalaDoctorList::removeFromName(std::string doctor_Name)
{
    KoalaDoctorList *temp = this;

    for (; temp != nullptr && temp->m_Doctor->getName().compare(doctor_Name);
        temp = temp->m_Next);
    if (temp)
        temp->m_Doctor = nullptr;
    return this;
}

void KoalaDoctorList::dump(void)
{
    KoalaDoctorList *temp = this;

    std::cout << "Doctors: ";

    for (; temp->m_Next != nullptr; temp = temp->m_Next) {
        if (temp->m_Doctor != nullptr)
            std::cout << temp->m_Doctor->getName() << ", ";
        else
            std::cout << "[nullptr]" << ", ";
    }
    if (temp) {
        if (temp->m_Doctor) {
            std::cout << temp->m_Doctor->getName() << ".";
        } else {
            std::cout << "[nullptr]" << ".";
        }
    }
    std::cout << std::endl;
}