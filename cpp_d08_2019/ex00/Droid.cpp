/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** Droid
*/

#include "Droid.hpp"

Droid::Droid(std::string id)
    : Energy(50), Attack(25), Toughness(15), Status(new std::string("Standing by"))
{
    this->Id = id;
    std::cout << "Droid '" << Id << "' Activated" << std::endl;
}

Droid::Droid(Droid const &new_droid)
    : Attack(25), Toughness(15)
{
    Id = new_droid.Id;
    Energy = new_droid.Energy;
    Status = new std::string (*new_droid.Status);

    std::cout << "Droid '" << Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    if (this->Status)
        delete this->Status;
    std::cout << "Droid '" << Id << "' Destroyed" << std::endl;
}

std::string Droid::getId() const
{
    return Id;
}

size_t Droid::getEnergy() const
{
    return Energy;
}

size_t Droid::getAttack() const
{
    return Attack;
}

size_t Droid::getToughness() const
{
    return Toughness;
}

std::string *Droid::getStatus() const
{
    return Status;
}

void Droid::setId(std::string new_id)
{
    Id = new_id;
}

void Droid::setEnergy(size_t new_energy)
{
    if (new_energy > 100)
        new_energy = 100;
    Energy = new_energy;
}

void Droid::setStatus(std::string *new_status)
{
    if (Status) {
        delete Status;
    }
    this->Status = new_status;
}

void Droid::operator=(const Droid &droid)
{
    setId(droid.Id);
    setEnergy(droid.Energy);
    this->setStatus(new std::string (*droid.Status));
}

bool Droid::operator==(const Droid &droid) const
{
    if (Id.compare(droid.Id) == 0 && Energy == droid.Energy &&
        (*Status).compare(*droid.Status) == 0) {
        return true;
    }
    return false;
}

bool Droid::operator!=(const Droid &droid) const
{
    if (Id.compare(droid.Id) != 0 || Energy != droid.Energy || (*Status).compare(*droid.Status) != 0) {
        return true;
    }
    return false;
}

size_t &Droid::operator<<(size_t &new_energy)
{
    size_t required = 100 - Energy;

    Energy += new_energy;
    if (new_energy >= required)
    {
        new_energy -= required;
    } else {
        new_energy = 0;
    }
    if (Energy > 100)
        Energy = 100;
    return new_energy;
}

std::ostream &operator<<(std::ostream &s, const Droid &droid)
{
    s << "Droid '" << droid.getId() << "', " << *droid.getStatus() << ", " << droid.getEnergy();
    return s;
}