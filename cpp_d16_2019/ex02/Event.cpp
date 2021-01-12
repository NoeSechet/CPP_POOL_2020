/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Event
*/

#include "Event.hpp"

Event::Event()
    : m_time(0), m_event("event")
{
}

Event::Event(unsigned int time, const std::string &event)
    : m_time(time), m_event(event)
{
}

Event::~Event()
{
}

Event::Event(const Event &other)
{
    this->m_event = other.m_event;
    this->m_time = other.m_time;
}

Event &Event::operator=(const Event &rhs)
{
    this->m_event = rhs.m_event;
    this->m_time = rhs.m_time;

    return *this;
}