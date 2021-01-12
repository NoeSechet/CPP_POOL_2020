/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** AWeapon
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
    : _name(name)
{
    _APCost = apcost;
    _damage = damage;
}

AWeapon::~AWeapon()
{
}