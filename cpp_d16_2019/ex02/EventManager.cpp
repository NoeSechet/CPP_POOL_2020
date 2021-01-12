/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** EventManager
*/

#include "EventManager.hpp"

EventManager::EventManager()
{
    this->m_time = 0;
}

EventManager::~EventManager()
{
}

void EventManager::addEvent(const Event &e)
{
    std::list<Event>::iterator ite = this->listEv.begin();

    if (e.getTime() < m_time) {
        return;
    }
    for (; e.getTime() > ite->getTime() && ite != this->listEv.end(); ) {
        ite++;
    }

    this->listEv.insert(ite, e);
}

void EventManager::removeEventsAt(unsigned int time)
{
    std::list<Event>::iterator ite = this->listEv.begin();

    if (time < m_time) {
        return;
    }

    for (; ite != this->listEv.end(); ) {
        if (time == ite->getTime())
        {
            ite = this->listEv.erase(ite);
        } else {
            ite++;
        }
    }
}

void EventManager::dumpEvents() const
{
    std::list<Event>::const_iterator ite = this->listEv.begin();

    while (ite != this->listEv.end())
    {
        std::cout << ite->getTime() << ": " << ite->getEvent() << std::endl;
        ite++;
    }
}

void EventManager::dumpEventAt(unsigned int time) const
{
    std::list<Event>::const_iterator ite = this->listEv.begin();

    while (ite != this->listEv.end())
    {
        if (ite->getTime() == time)
            std::cout << ite->getTime() << ": " << ite->getEvent() << std::endl;
        ite++;
    }
}

void EventManager::addTime(unsigned int time)
{
    std::list<Event>::iterator ite = this->listEv.begin();

    this->m_time = this->m_time + time;

    while (ite->getTime() <= this->m_time && ite != listEv.end())
    {
        std::cout << ite->getEvent() << std::endl;
        ite = this->listEv.erase(this->listEv.begin());
    }
}

void EventManager::addEventList(std::list<Event> &events)
{
    std::list<Event>::iterator ite = events.begin();

    while (ite != events.end())
    {
        this->addEvent(*ite);
        ite++;
    }
}