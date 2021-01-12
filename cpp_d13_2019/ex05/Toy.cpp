/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy()
    : m_type(BASIC_TOY), m_name("toy"), m_picture("")
{
    this->m_picture.data = "";
}

Toy::Toy(const ToyType type, const std::string name, const std::string &file)
    : m_type(type), m_name(name), m_picture(file)
{
}

Toy::Toy(const Toy &toyToCopy)
    : m_type(toyToCopy.m_type), m_name(toyToCopy.m_name), m_picture(toyToCopy.m_picture)
{
}

Toy::~Toy()
{
}

bool Toy::setAscii(const std::string &file)
{
    if (this->m_picture.getPictureFromFile(file)) {
        return true;
    } else {
        this->m_lastError.type = Toy::Error::PICTURE;
    }
    return false;
}

Toy &Toy::operator=(const Toy &toCopy)
{
    this->m_name = toCopy.getName();
    this->m_picture = toCopy.getAscii();

    return *this;
}

void Toy::speak(std::string statement)
{
    std::cout << this->m_name << " \"" << statement << "\"" << std::endl;
}

bool Toy::speak_es(std::string statement)
{
    (void)statement;
    this->m_lastError.type = Toy::Error::SPEAK;
    return false;
}

Toy &Toy::operator<<(const std::string s)
{
    this->m_picture.data = s;
    return *this;
}

std::ostream &operator<<(std::ostream &s, const Toy &toy)
{
    s << toy.getName() << std::endl;
    s << toy.getAscii() << std::endl;
    return s;
}


std::string Toy::Error::what() const
{
    std::string errorText;

    if (this->type == PICTURE) {
        errorText =  "bad new illustration";
    } else if (this->type == SPEAK) {
        errorText = "wrong mode";
    } else {
        errorText = "";
    }
    return errorText;
}

std::string Toy::Error::where() const
{
    std::string functionError;

    if (this->type == PICTURE) {
        functionError =  "setAscii";
    } else if (this->type == SPEAK) {
        functionError = "speak_es";
    } else {
        functionError = "";
    }
    return functionError;
}

Toy::Error Toy::getLastError()
{
    return this->m_lastError;
}