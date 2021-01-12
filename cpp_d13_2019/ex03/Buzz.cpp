/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** Buzz
*/

#include "Buzz.hpp"

Buzz::Buzz(const std::string name, std::string filename)
    : Toy(BUZZ, name, filename)
{
}

Buzz::~Buzz()
{
}

void Buzz::speak(std::string statement)
{
    std::cout << "BUZZ: ";
    Toy::speak(statement);
}
