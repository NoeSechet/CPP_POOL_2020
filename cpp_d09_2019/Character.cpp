/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name, int level)
    : m_name(name), m_level(level)
{
    std::string m_Class = "Character";
    std::string m_Race = "Human";

    this->m_strength = 5;
    this->m_intelligence = 5;
    this->m_stamina = 5;
    this->m_spirit = 5;
    this->m_agility = 5;

    std::cout << this->m_name << " Created" << std::endl;
}

Character::~Character()
{
}

int Character::CloseAttack()
{
    if (this->m_power >= 10) {
        this->m_power -= 10;
        std::cout << this->m_name << " strikes with a wooden stick" << std::endl;
        return this->m_strength + 10;
    } else {
        std::cout << this->m_name << " out of power" << std::endl;
    }
    return 0;
}

int Character::RangeAttack()
{
    if (this->m_power >= 10) {
        this->m_power -= 10;
        std::cout << this->m_name << " tosses a stone" << std::endl;
        return this->m_strength + 5;
    } else {
        std::cout << this->m_name << " out of power" << std::endl;
    }
    return 0;
}

void Character::Heal()
{
    this->m_PV += 50;
    if (this->m_PV > 100) {
        this->m_PV = 100;
    }
    std::cout << this->m_name << " takes a potion" << std::endl;
}

void Character::RestorePower()
{
    this->m_power += 100;
    if (this->m_power > 100)
        this->m_power = 100;
    std::cout << this->m_name << " eats" << std::endl;
}

void Character::TakeDamage(int damage)
{
    this->m_PV -= damage;
    if (this->getPv() <= 0) {
        std::cout << this->m_name << " out of combat" << std::endl;
    } else {
        std::cout << this->m_name << " takes " << damage << " damage" << std::endl;
    }
}
