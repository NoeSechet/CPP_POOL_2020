/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** Droid
*/

#include "Droid.hpp"

Droid::Droid(std::string id)
    : Energy(50), Attack(25), Toughness(15),
    Status(new std::string("Standing by")), BattleData(new DroidMemory)
{
    Id = id;

    std::cout << "Droid '" << Id << "' Activated" << std::endl;
}

Droid::Droid(Droid const &to_repair) : Attack(25), Toughness(15)
{
    Id = to_repair.Id;
    Energy = to_repair.Energy;
    Status = new std::string(*to_repair.getStatus());

    std::cout << "Droid '" << Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    if (this->Status)
        delete this->Status;
    if (BattleData)
        delete BattleData;
    std::cout << "Droid '" << Id << "' Destroyed" << std::endl;
}

void Droid::setBattleData(DroidMemory *new_memory)
{
    if (BattleData)
        delete BattleData;
    BattleData = new_memory;
}

void Droid::setEnergy(size_t new_energy)
{
    if (new_energy > 100)
        new_energy = 100;
    Energy = new_energy;
}

void Droid::setStatus(std::string *new_status)
{
    if (this->Status) {
        delete this->Status;
    }
    this->Status = new_status;
}

void Droid::operator=(const Droid &droid)
{
    setId(droid.Id);
    setEnergy(droid.Energy);
    this->setStatus(new std::string(*droid.getStatus()));
    this->setBattleData(new DroidMemory());
}

bool Droid::operator==(const Droid &droid) const
{
    if ((*Status).compare(*droid.Status) == 0) {
        return true;
    }
    return false;
}

bool Droid::operator!=(const Droid &droid) const
{
    if ((*Status).compare(*droid.Status) != 0) {
        return true;
    }
    return false;
}

size_t &Droid::operator<<(size_t &new_energy)
{
    size_t required = 100 - Energy;

    Energy += new_energy;
    if (new_energy > required)
    {
        new_energy -= required;
    } else {
        new_energy = 0;
    }
    if (Energy > 100)
        Energy = 100;
    return new_energy;
}

std::ostream& operator<<(std::ostream &s, const Droid &droid)
{
    s << "Droid '" << droid.getId() << "', " << *droid.getStatus() << ", " << droid.getEnergy();
    return s;
}