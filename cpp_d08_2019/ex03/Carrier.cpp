/*
** EPITECH PROJECT, 2020
** ex03
** File description:
** Carrier
*/

#include "Carrier.hpp"
#include <iostream>
#include <cstdlib>

Carrier::Carrier(std::string Id)
    : Energy(300), Attack(100), Toughness(90), Speed(0)
{
    this->Id = Id;
    
    for (int i = 0; i < 5; i += 1) {
        this->Droids[i] = nullptr;
    }
}

Carrier::~Carrier()
{
    for (int i = 0; i < 5; i += 1) {
        if (this->Droids[i])
            delete Droids[i];
    }
}

size_t Carrier::getNbDroidsOnBoard() const
{
    size_t counter = 0;

    for (size_t i = 0; i < 5; i += 1) {
        if (this->Droids[i] != nullptr) {
            counter += 1;
        }
    }
    return counter;
    
}

void Carrier::adaptVaisselSpeed()
{
    size_t	counter = 0;
    for (int i = 0; i < 5; i += 1) {
        if (this->Droids[i] != nullptr)
            counter += 1;
    }

    if (counter > 0)
        this->Speed = 100 - (counter * 10);
    else
        this->Speed = 0;
}

Carrier &Carrier::operator<<(Droid * &droidToBoard)
{
    for (int i = 0; i < 5; i += 1) {
        if (this->Droids[i] == nullptr) {
            this->Droids[i] = droidToBoard;
            droidToBoard = nullptr;
            this->adaptVaisselSpeed();
            return *this;
        }
    }
    return *this;
}

Carrier &Carrier::operator>>(Droid * &droidToDisembark)
{
    for (int i = 0; i < 5; i += 1)
    {
        if (this->Droids[i] != nullptr)
        {
            droidToDisembark = this->Droids[i];
            this->Droids[i] = nullptr;
            this->adaptVaisselSpeed();
            return *this;
        }
    }
    return *this;
}

Droid *&Carrier::operator[](const size_t &spot)
{
    return this->Droids[spot];
}

Droid * const &Carrier::operator[](const size_t &spot) const
{
    return this->Droids[spot];
}

Carrier &Carrier::operator~()
{
    this->adaptVaisselSpeed();
    return *this;
}

bool Carrier::operator()(int x, int y)
{
    int NbDroid = this->getNbDroidsOnBoard();
    size_t energyCost = (abs(x) + abs(y)) * (10 + (NbDroid));

    if (this->Speed == 0 || energyCost > this->Energy)
        return false;
    this->Energy -= energyCost;
    return true;
}

size_t &Carrier::operator<<(size_t &newEnergy)
{
    size_t required = 600 - this->Energy;

    Energy += newEnergy;
    if (newEnergy > required)
    {
        newEnergy -= required;
    } else {
        newEnergy = 0;
    }
    if (Energy > 600)
        Energy = 600;
    return newEnergy;
}

void Carrier::printCarrierInfo() const
{
    std::cout << "Carrier '" << this->Id << "' Droid(s) on-board:" << std::endl;
    for (size_t i = 0; i < 5; i += 1)
    {
        std::cout << "[" << i << "] : ";
        if (!this->Droids[i]) {
            std::cout << "Free";
        } else {
            std::cout << *this->Droids[i];
        }
        std::cout << std::endl;
    }
    std::cout << "Speed : " << this->getSpeed() << ", Energy " << this->getEnergy();
}

std::ostream& operator<<(std::ostream &s, Carrier const &carrier)
{
    carrier.printCarrierInfo();
    return s;
}