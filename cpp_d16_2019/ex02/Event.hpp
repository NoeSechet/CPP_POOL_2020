/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Event
*/

#ifndef EVENT_HPP_
#define EVENT_HPP_

#include <list>
#include <iostream>
#include <chrono>
#include <ctime>
#include <iterator>

class Event {
	public:
		Event();
        Event(unsigned int time, const std::string &event);
        ~Event();
        Event(const Event &other);
        Event &operator=(const Event &rhs);
        unsigned int getTime() const { return this->m_time; }
        const std::string &getEvent() const { return this->m_event; }
        void setTime(unsigned int time) { this->m_time = time; }
        void setEvent(const std::string &event) { this->m_event = event; }

	protected:
        unsigned int m_time;
        std::string m_event;
	private:
};

#endif /* !EVENT_HPP_ */