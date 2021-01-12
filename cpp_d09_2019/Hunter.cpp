/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Hunter
*/

#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, size_t level, const std::string &weaponName)
    : Character(name, level), Warrior(name, level, weaponName)
{
    std::string m_Class = "Hunter";
    std::string m_Race = "Elf";

    this->m_strength = 9;
    this->m_stamina = 9;
    this->m_intelligence = 5;
    this->m_spirit = 6;
    this->m_agility = 25;

    std::cout << this->m_name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{
}


int Hunter::CloseAttack()
{
    if (this->m_power >= 30) {
        this->m_power -= 30;
        std::cout << this->m_name << " strikes with his " << this->m_weaponName << std::endl;
        return this->m_strength + 20;
    }
    return 0;
}

int Hunter::RangeAttack()
{
    if (this->m_power >= 25) {
        this->m_power -= 25;
        std::cout << this->m_name << " uses his bow" << std::endl;
        return this->m_agility + 20;
    }
    return 0;
}

void Hunter::RestorePower()
{
    this->m_power += 100;
    if (this->m_power > 100)
        this->m_power = 100;
    std::cout << this->m_name << " meditates" << std::endl;
}