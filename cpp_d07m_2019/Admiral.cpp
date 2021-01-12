/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Admiral
*/

#include "Admiral.hpp"

namespace Federation {
    namespace Starfleet {
        Admiral::Admiral(std::string name)
        {
            _name = name;
            std::cout << "Admiral " << _name << " ready for action." << std::endl;
            firePtr = &Federation::Starfleet::Ship::fire;
            movePtr = &Federation::Starfleet::Ship::move;
        }

        Admiral::~Admiral()
        {
        }
        
        void Admiral::fire(Federation::Starfleet::Ship *ship, Borg::Ship *target)
        {
            std::cout << "On order from Admiral " << _name << ":" << std::endl;
            (ship->*firePtr)(target);
        }
        bool Admiral::move(Federation::Starfleet::Ship *ship, Destination dest)
        {
            return (ship->*movePtr)(dest);
        }

    }
}