/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** PlasmaRifle
*/

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
    : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack () const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}