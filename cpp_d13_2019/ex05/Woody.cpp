/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** Woody
*/

#include "Woody.hpp"

Woody::Woody(const std::string name, std::string filename)
    : Toy(WOODY, name, filename)
{
}

Woody::~Woody()
{
}

void Woody::speak(std::string statement)
{
    std::cout << "WOODY: ";
    Toy::speak(statement);
}
