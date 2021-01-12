/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name)
    : _name(name)
{
    _AP = 40;
    _weapon = nullptr;
}

Character::~Character()
{
}

void Character::recoverAP()
{
    _AP += 10;
    if (_AP > 40)
        _AP = 40;
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
    if (!this->_weapon || this->_AP < this->_weapon->getAPCost()) {
        return;
    }

    if (enemy) {
        std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
        this->_weapon->attack();
        enemy->takeDamage(this->_weapon->getDamage());
        if (enemy->getHP() <= 0) {
            delete enemy;
        }
        this->_AP -= this->_weapon->getAPCost();
    }
}

void Character::printInfo() const
{
    if (this->_weapon) {
        std::cout << this->_name << " has " << this->_AP <<
            " AP and wields a " << this->_weapon->getName() << std::endl;
        return;
    }
    std::cout << this->_name << " has " << this->_AP << " AP and is unarmed" << std::endl;
}

std::ostream &operator<<(std::ostream &s, const Character &character)
{
    character.printInfo();
    return s;
}