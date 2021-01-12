/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** DroidMemory
*/

#include "DroidMemory.hpp"

DroidMemory::DroidMemory()
{
    Exp = 0;
    Fingerprint = random();
}

DroidMemory::~DroidMemory()
{
}

DroidMemory &DroidMemory::operator<<(DroidMemory &mem)
{
    this->setExp(this->Exp + mem.getExp());
    this->setFingerprint(mem.getFingerprint() ^ this->getFingerprint());

    return *this;
}

DroidMemory &DroidMemory::operator>>(DroidMemory &mem)
{
    mem.setExp(mem.Exp + this->getExp());
    mem.setFingerprint(mem.getFingerprint() ^ this->getFingerprint());

    return mem;
}

DroidMemory &DroidMemory::operator+=(DroidMemory &mem)
{
    return operator<<(mem);
}

DroidMemory &DroidMemory::operator+=(size_t new_exp)
{
    this->setExp(this->Exp + new_exp);
    this->setFingerprint(new_exp ^ this->getFingerprint());

    return *this;
}

DroidMemory DroidMemory::operator+(const DroidMemory &mem) const
{
    DroidMemory new_droid;
    DroidMemory new_droid2 = mem;

    new_droid.setExp(this->getExp());
    new_droid.setFingerprint(this->getFingerprint());

    new_droid.operator+=(new_droid2);

    return new_droid;
}

DroidMemory DroidMemory::operator+(const size_t new_exp) const
{
    DroidMemory new_droid;
    size_t copy = new_exp;

    new_droid.setExp(this->Exp);
    new_droid.setFingerprint(this->Fingerprint);

    new_droid.operator+=(copy);

    return new_droid;
}

std::ostream& operator<<(std::ostream &s, const DroidMemory &droid)
{
    s << "DroidMemory '" << droid.getFingerprint() << "', " << droid.getExp();
    return s;
}