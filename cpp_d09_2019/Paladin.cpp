/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Paladin
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, size_t level, const std::string &weaponName)
    : Character(name, level), Warrior(name, level, weaponName), Mage(name, level), Priest(name, level)
{
    std::string m_Class = "Paladin";
    std::string m_Race = "Human";

    this->m_strength = 9;
    this->m_intelligence = 10;
    this->m_stamina = 10;
    this->m_spirit = 10;
    this->m_agility = 2;

    std::cout << "the light falls on " << this->m_name << std::endl;
}

Paladin::~Paladin()
{
}

int Paladin::CloseAttack()
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

int Paladin::RangeAttack()
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

void Paladin::Heal()
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

void Paladin::RestorePower()
{
    this->m_power += 100;
    if (this->m_power > 100)
        this->m_power = 100;
    std::cout << this->m_name << " eats" << std::endl;
}

int Paladin::Intercept()
{
    return Warrior::RangeAttack();
}