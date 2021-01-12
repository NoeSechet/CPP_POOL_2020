/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** RadScorpion
*/

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
    : AEnemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}