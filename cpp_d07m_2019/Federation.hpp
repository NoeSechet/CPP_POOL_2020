/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Federation
*/

#ifndef FEDERATION_HPP_
#define FEDERATION_HPP_

#include "Destination.hpp"
#include "WarpSystem.hpp"
#include "Borg.hpp"

namespace Borg {
    class Ship;
}

namespace Federation {
    namespace Starfleet {

        class Ensign {
            private:
                std::string _name;
            public:
                explicit Ensign(std::string _name);
                ~Ensign();

                std::string getName();
                int getAge();
                void setAge(int age);

            protected:
        };

        class Captain {
            private:
                std::string _name;
                int _age = 0;
            public:
                Captain(std::string _name);
                ~Captain();

                std::string getName();
                int getAge();
                void setAge(int age);

            protected:
        }; 

        class Ship {
            private:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core *m_core;
                Captain *m_captain;
                Destination _location;
                Destination _home = EARTH;
                int _shield;
                int _photonTorpedo;
            public:
                Ship(int _length = 289, int _width = 132,
                    std::string _name = "Entreprise", short _maxWarp = 6, int torpedo = 0);
                ~Ship();

                void setupCore(WarpSystem::Core *coreShip);
                void checkCore(void);
                void promote(Captain *captain);

                bool move(int warp, Destination d); // set _location to d
                bool move(int warp); // set _location to _home
                bool move(Destination d); // set _location to d
                bool move(); // set _location to _home

                int getShield();
                void setShield(int shield);
                int getTorpedo();
                void setTorpedo(int torpedo);

                void fire(Borg::Ship *target);
                void fire(int torpedoes, Borg::Ship *target);

                WarpSystem::Core *getCore();

            protected:
        };
    };
    class Ship {
        private:
            const int _length;
            const int _width;
            const std::string _name;
            const short _maxWarp = 1;
            WarpSystem::Core *m_core;
            Destination _location;
            Destination _home = VULCAN;

        public:
            Ship(int _length, int _width, std::string _name);
            ~Ship();

            void setupCore(WarpSystem::Core *coreShip);
            void checkCore(void);

            bool move(int warp, Destination d); // set _location to d
            bool move(int warp); // set _location to _home
            bool move(Destination d); // set _location to d
            bool move(); // set _location to _home

            WarpSystem::Core *getCore();
        protected:
    };
};

#endif /* !FEDERATION_HPP_ */
