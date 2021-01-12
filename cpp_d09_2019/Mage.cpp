/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Mage
*/

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level)
    : Character(name, level)
{
    std::string m_Class = "Mage";
    std::string m_Race = "Gnome";

    this->m_strength = 6;
    this->m_stamina = 6;
    this->m_intelligence = 12;
    this->m_spirit = 11;
    this->m_agility = 7;

    std::cout << this->m_name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int Mage::CloseAttack()
{
    if (this->m_power >= 10) {
        this->m_power -= 10;
        std::cout << this->m_name << " blinks" << std::endl;
        this->Range = RANGE;
    } else {
        std::cout << this->m_name << " out of power" << std::endl;
    }
    return 0;
}

int Mage::RangeAttack()
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

void Mage::RestorePower()
{
    this->m_power += 50 + this->m_intelligence;
    if (this->m_power > 100) {
        this->m_power = 100;
    }
    std::cout << this->m_name << " takes a mana potion" << std::endl;
}