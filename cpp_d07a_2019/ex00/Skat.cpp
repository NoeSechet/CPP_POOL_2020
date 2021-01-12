/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Skat
*/

#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks)
{
    this->_name = name;
    this->_stimPaks = stimPaks;
}

Skat::~Skat()
{
}

int &Skat::stimPaks()
{
    return this->_stimPaks;
}

const std::string &Skat::name()
{
    return this->_name;
}

void Skat::shareStimPaks(int number, int& stock)
{
    if (number > _stimPaks) {
        std::cout << "Don't be greedy" <<std::endl;
        return;
    }
    _stimPaks -= number;
    stock += number;
    std::cout << "Keep the change." << std::endl;
}

void Skat::addStimPaks(unsigned int number)
{
    if (number == 0)
        std::cout << "Hey boya, did you forget something?" << std::endl;
    _stimPaks += number;
}

void Skat::useStimPaks()
{
    if (_stimPaks <= 0) {
        std::cout << "Mediiiiiic" << std::endl;
    } else {
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
        _stimPaks -= 1;
    }
}

void Skat::status()
{
    std::cout << "Soldier " << _name << " reporting " << _stimPaks <<
        " stimpaks remaining sir!" << std::endl;
}