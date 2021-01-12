/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Admiral
*/

#ifndef ADMIRAL_HPP_
#define ADMIRAL_HPP_

#include "Federation.hpp"

namespace Federation {
    namespace Starfleet {
        class Admiral
        {
        private:
            std::string _name;
        public:
            Admiral(std::string name);
            ~Admiral();

            void (Federation::Starfleet::Ship::*firePtr)(Borg::Ship *);
            bool (Federation::Starfleet::Ship::*movePtr)(Destination d);

            void fire(Federation::Starfleet::Ship *ship, Borg::Ship *target);
            bool move(Federation::Starfleet::Ship *ship, Destination dest);
        };

    }
}

#endif /* !ADMIRAL_HPP_ */
