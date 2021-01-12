/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** SickKoala
*/

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name)
    : m_name(name)
{
}

SickKoala::~SickKoala()
{
    std::cout << "Mr."<< m_name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

std::string SickKoala::getName(void)
{
    return m_name;
}

void SickKoala::poke(void)
{
    std::cout << "Mr." << m_name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
    if (!str.compare("Mars")) {
        std::cout << "Mr." << m_name << ": Mars, and it kreogs!" << std::endl;
        return true;
    } else if (!str.compare("Buronzand")) {
        std::cout << "Mr." << m_name << ": And you'll sleep right away!" << std::endl;
        return true;
    } else {
        std::cout << "Mr." << m_name << ": Goerkreog!" << std::endl;
        return false;
    }
}

void SickKoala::overDrive(std::string str)
{
    std::string kreog = "Kreog!";
    std::string nbr = "1337!";
    size_t pos= 0;

    while ((pos = str.find(kreog, pos)) != std::string::npos) {
        str.replace(pos, kreog.length(), nbr);
        pos += nbr.length();
    }
    std::cout << "Mr." << m_name << ": " << str << std::endl;
}