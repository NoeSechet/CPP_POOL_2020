/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** DomesticKoala
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &actionK)
    : m_ActionK(actionK)
{
}

DomesticKoala::~DomesticKoala()
{
}

void DomesticKoala::eraseActionList()
{
    this->m_listAction.clear();
    this->m_listCommand.clear();
}

DomesticKoala::DomesticKoala(const DomesticKoala &KoalaCopy)
    : m_ActionK(KoalaCopy.m_ActionK)
{
    eraseActionList();

    this->m_listAction = KoalaCopy.m_listAction;
    this->m_listCommand = KoalaCopy.m_listCommand;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &KoalaCopy)
{
    eraseActionList();

    this->m_ActionK = KoalaCopy.m_ActionK;
    this->m_listAction = KoalaCopy.m_listAction;
    this->m_listCommand = KoalaCopy.m_listCommand;

    return *this;
}

void DomesticKoala::learnAction(unsigned char command, methodPointer_t action)
{
    this->m_listCommand.push_back(command);
    this->m_listAction.push_back(action);
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    for (size_t i = 0; i < this->m_listCommand.size(); i += 1)
    {
        if (this->m_listCommand[i] == command) {
            this->m_listCommand.erase(this->m_listCommand.begin() + i);
            this->m_listAction.erase(this->m_listAction.begin() + i);
        }
    }
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
    void (KoalaAction::*funcPoint)(const std::string &) = nullptr;

    for (size_t i = 0; i < this->m_listCommand.size(); i += 1)
    {
        if (this->m_listCommand[i] == command) {
            funcPoint = this->m_listAction[i];
            (this->m_ActionK.*funcPoint)(param);
        }
    }
}

void DomesticKoala::setKoalaAction(KoalaAction &newActionKoala)
{
    this->eraseActionList();
    this->m_ActionK = newActionKoala;
}