/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Federation
*/

#include "Federation.hpp"
#include "Borg.hpp"

namespace Federation {
    namespace Starfleet {

        Ensign::Ensign(std::string name) {
            _name = name;
            std::cout << "Ensign " << _name << ", awaiting orders." << std::endl;
        }
        Ensign::~Ensign()
        {
        }

        Captain::Captain(std::string name)
        {
            _name = name;
        }
        Captain::~Captain()
        {
        }

        std::string Captain::getName()
        {
            return _name;
        }
        int Captain::getAge()
        {
            return _age;
        }
        void Captain::setAge(int age)
        {
            _age = age;
        }

        Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
            : _length(length), _width(width), _name(name), _maxWarp(maxWarp)
        {

            _location = _home;
            _shield = 100;
            _photonTorpedo = torpedo;

            std::cout << "The ship USS " << _name <<
                " has been finished." << std::endl;
            std::cout << "It is " << _length <<
            " m in length and " << _width << " m in width." << std::endl;
            std::cout << "It can go to Warp " <<
            _maxWarp << "!" << std::endl;
            if (torpedo > 0)
                std::cout << "Weapons are set: " <<
                _photonTorpedo << " torpedoes ready." << std::endl;
        }
        Ship::~Ship()
        {
        }
        void Ship::setupCore(WarpSystem::Core *coreShip)
        {
            m_core = coreShip;
            std::cout << "USS " << _name << ": The core is set." << std::endl;
        }
        void Ship::checkCore(void)
        {
            std::cout << "USS " << _name << ": The core is " <<
            (m_core->checkReactor()->isStable()? "stable" : "unstable") << " at the time." << std::endl;
        }
        void Ship::promote(Captain *captain) {
            m_captain = captain;
            if (m_captain)
                std::cout << m_captain->getName() << ": I'm glad to be the captain of the USS " <<
                _name << "." << std::endl;
        }
        bool Ship::move(int warp, Destination d) {
            if (warp <= _maxWarp && d != _location && m_core->checkReactor()->isStable()) {
                _location = d;
                return true;
            } else
                return false;
        }
        bool Ship::move(int warp) {
            if (warp <= _maxWarp && _location != _home && m_core->checkReactor()->isStable()) {
                _location = _home;
                return true;
            } else
                return false;
        }
        bool Ship::move(Destination d) {
            if (d != _location && m_core->checkReactor()->isStable()) {
                _location = d;
                return true;
            } else
                return false;
        }
        bool Ship::move() {
            if (_location != _home && m_core->checkReactor()->isStable()) {
                _location = _home;
                return true;
            } else
                return false;
        }
        int Ship::getShield() {
            return _shield;
        }
        void Ship::setShield(int shield) {
            _shield = shield;
        }
        int Ship::getTorpedo() {
            return _photonTorpedo;
        }
        void Ship::setTorpedo(int torpedo) {
            _photonTorpedo = torpedo;
        }
        void Ship::fire(Borg::Ship *target) {
            _photonTorpedo -= 1;
            target->setShield(target->getShield() - 50);
            std::cout << _name << ": Firing on target. " <<
                _photonTorpedo << " torpedoes remaining." << std::endl;
        }
        void Ship::fire(int torpedoes, Borg::Ship *target) {
            if (torpedoes > _photonTorpedo) {
                std::cout << _name << ": No enough torpedoes to fire, " <<
                m_captain->getName() << "!" << std::endl;
                return;
            }
            for (int i = 0; i < torpedoes; i++) {
                fire(target);
            }
            if (_photonTorpedo == 0)
                std::cout << _name << ": No more torpedoes to fire, " <<
                m_captain->getName() << "!" << std::endl;
        }
        WarpSystem::Core *Ship::getCore() {
            return m_core;
        }

    } // END OF STARFLEET


    Ship::Ship(int length, int width, std::string name)
        : _length(length), _width(width), _name(name) {

        std::cout << "The independent ship " << _name <<
            " just finished its construction." << std::endl;

        std::cout << "It is " << _length <<
        " m in length and " << _width << " m in width." << std::endl;

        _location = _home;
    }

    Ship::~Ship() {

    }

    void Ship::setupCore(WarpSystem::Core *coreShip) {
        m_core = coreShip;
        std::cout << _name << ": The core is set." << std::endl;
    }

    void Ship::checkCore(void) {
        std::cout << _name << ": The core is " <<
        (m_core->checkReactor()->isStable()? "stable" : "unstable") << " at the time." << std::endl;
    }

    bool Ship::move(int warp, Destination d)
    {
        if (warp <= _maxWarp && d != _location && m_core->checkReactor()->isStable()) {
            _location = d;
            return true;
        } else
            return false;
    }
    bool Ship::move(int warp)
    {
        if (warp <= _maxWarp && _location != _home && m_core->checkReactor()->isStable()) {
            _location = _home;
            return true;
        } else
            return false;
    }
    bool Ship::move(Destination d)
    {
        if (d != _location && m_core->checkReactor()->isStable()) {
            _location = d;
            return true;
        } else
            return false;
    }
    bool Ship::move()
    {
        if (_location != _home && m_core->checkReactor()->isStable()) {
            _location = _home;
            return true;
        } else
            return false;
    }

    WarpSystem::Core *Ship::getCore()
    {
        return m_core;
    }

}