/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** EventManager
*/

#ifndef EVENTMANAGER_HPP_
#define EVENTMANAGER_HPP_

#include "Event.hpp"

class EventManager {
	public:
		EventManager();
		~EventManager();

        void addEvent(const Event & e);
        void removeEventsAt(unsigned int time);
        void dumpEvents() const;
        void dumpEventAt(unsigned int time) const;
        void addTime(unsigned int time);
        void addEventList(std::list<Event> &events);

	protected:
        unsigned int m_time = 0;
        std::list<Event> listEv;
	private:
};

#endif /* !EVENTMANAGER_HPP_ */
