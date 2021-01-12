/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** BorgQueen
*/

#include "BorgQueen.hpp"

namespace Borg {
    
    BorgQueen::BorgQueen()
    {
        movePtr = &Borg::Ship::move;
        firePtr = &Borg::Ship::fire;
        destroyPtr = &Borg::Ship::fire;
    }

    BorgQueen::~BorgQueen()
    {
    }

    bool BorgQueen::move(Borg::Ship *ship, Destination dest)
    {
        return (ship->*movePtr)(dest);
    }
    void BorgQueen::fire(Borg::Ship *ship, Federation::Starfleet::Ship *target)
    {
        (ship->*firePtr)(target);
    }
    void BorgQueen::destroy(Borg::Ship *ship, Federation::Ship *target)
    {
        (ship->*destroyPtr)(target);
    }

}