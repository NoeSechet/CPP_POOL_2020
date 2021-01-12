/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Priest
*/

#include "Priest.hpp"

Priest::Priest(const std::string &name, int level)
    : Character(name, level), Mage(name, level)
{
    std::string m_Class = "Priest";
    std::string m_Race = "Orc";

    this->m_strength = 4;
    this->m_stamina = 4;
    this->m_intelligence = 42;
    this->m_spirit = 21;
    this->m_agility = 2;

    std::cout << this->m_name << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

int Priest::CloseAttack()
{
    if (this->m_power >= 10) {
        this->m_power -= 10;
        std::cout << this->m_name << " uses a spirit explosion" << std::endl;
        this->Range = RANGE;
        return this->m_spirit + 10;
    } else {
        std::cout << this->m_name << " out of power" << std::endl;
    }
    return 0;
}

int Priest::RangeAttack()
{
    if (this->m_power >= 25) {
        this->m_power -= 25;
        std::cout << this->m_name << " launches a fire ball" << std::endl;
        return this->m_spirit + 20;
    } else {
        std::cout << this->m_name << " out of power" << std::endl;
    }
    return 0;
}

void Priest::Heal()
{
    if (this->m_power >= 10) {
        this->m_power -= 10;
        this->m_PV += 70;
        if (this->m_PV > 100)
            this->m_PV = 100;
        std::cout << this->m_name << " casts a little heal spell" << std::endl;
    } else {
        std::cout << this->m_name << " out of power" << std::endl;
    }
}

void Priest::RestorePower()
{
    this->m_power += 50;
    if (this->m_power > 100)
        this->m_power = 100;
    std::cout << this->m_name << " takes a mana potion" << std::endl;
}