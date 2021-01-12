/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Warrior
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level, const std::string &weaponName)
    : Character(name, level), m_weaponName(weaponName)
{
    std::string m_Class = "Warrior";
    std::string m_Race = "Dwarf";

    this->m_strength = 12;
    this->m_stamina = 12;
    this->m_intelligence = 6;
    this->m_spirit = 5;
    this->m_agility = 7;

    std::cout << "I'm " << this->m_name <<
        " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int Warrior::CloseAttack()
{
    if (this->m_power >= 30) {
        this->m_power -= 30;
        std::cout << this->m_name << " strikes with his " << this->m_weaponName << std::endl;
        return this->m_strength + 20;
    } else {
        std::cout << this->m_name << " out of power" << std::endl;
    }
    return 0;
}

int Warrior::RangeAttack()
{
    if (this->m_power >= 10) {
        this->m_power -= 10;
        this->Range = CLOSE;
        std::cout << this->m_name << " intercepts" << std::endl;
    } else {
        std::cout << this->m_name << " out of power" << std::endl;
    }
    return 0;
}