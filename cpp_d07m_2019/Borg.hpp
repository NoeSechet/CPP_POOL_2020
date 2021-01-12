/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Borg
*/

#ifndef BORG_HPP_
#define BORG_HPP_

#include "WarpSystem.hpp"
#include "Federation.hpp"
#include "Destination.hpp"

namespace Federation {
    class Ship;
    namespace Starfleet {
        class Ship;
    }
}

namespace Borg {

    class Ship
    {
    private:
        int _side = 300;
        short _maxWarp = 9;
        WarpSystem::Core *m_core;
        Destination _location;
        Destination _home = UNICOMPLEX;
        int _shield; // set to 100 upon construction
        int _weaponFrequency; // provided upon construction
        short _repair; // can be provided . if not , set to 3 upon construction
    public:
        Ship(int weaponFrequency = 20, short repair = 3);
        ~Ship();

        void setupCore(WarpSystem::Core *coreShip);
        void checkCore(void);

        bool move(int warp, Destination d); // set _location to d
        bool move(int warp); // set _location to _home
        bool move(Destination d); // set _location to d
        bool move(); // set _location to _home

        int getShield();
        void setShield(int shield);
        int getWeaponFrequency();
        void setWeaponFrequency(int frequency);
        short getRepair();
        void setRepair(short repair);

        void fire(Federation::Starfleet::Ship *target);
        void fire(Federation::Ship *target);
        void repair();
    };

};

#endif /* !BORG_HPP_ */
