/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Parts
*/

#include "Parts.hpp"

Arms::Arms(std::string serial, bool functionnal)
{
    _serial = serial;
    _functionnal = functionnal;
}

Arms::~Arms()
{
}

bool Arms::isFunctionnal() const
{
    return _functionnal;
}
std::string Arms::serial()
{
    return _serial;
}
void Arms::informations() const
{
    std::cout << "\t[Parts] Arms " << _serial << " status : " <<
        (_functionnal? "OK" : "KO") << std::endl;
}

Legs::Legs(std::string serial, bool functionnal)
{
    _serial = serial;
    _functionnal = functionnal;
}

Legs::~Legs()
{
}

bool Legs::isFunctionnal() const
{
    return _functionnal;
}
std::string Legs::serial()
{
    return _serial;
}
void Legs::informations() const
{
    std::cout << "\t[Parts] Legs " << _serial << " status : " <<
        (_functionnal? "OK" : "KO") << std::endl;
}

Head::Head(std::string serial, bool functionnal)
{
    _serial = serial;
    _functionnal = functionnal;
}

Head::~Head()
{
}

bool Head::isFunctionnal() const
{
    return _functionnal;
}
std::string Head::serial()
{
    return _serial;
}
void Head::informations() const
{
    std::cout << "\t[Parts] Head " << _serial << " status : " <<
        (_functionnal? "OK" : "KO") << std::endl;
}