/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** AEnemy
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type)
    : _type(type)
{
    this->_HP = hp;
}

AEnemy::~AEnemy()
{
}

void AEnemy::takeDamage(int damage)
{
    if (damage <= 0)
        return;
    this->_HP -= damage;
}