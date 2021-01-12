/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Parts
*/

#ifndef PARTS_HPP_
#define PARTS_HPP_

#include <iostream>

class Arms
{
private:
    std::string _serial;
    bool _functionnal;
public:
    Arms(std::string serial = "A-01", bool functionnal = true);
    ~Arms();

    bool isFunctionnal() const;
    std::string serial();
    void informations() const;
};


class Legs
{
private:
    std::string _serial;
    bool _functionnal;
public:
    Legs(std::string serial = "L-01", bool functionnal = true);
    ~Legs();

    bool isFunctionnal() const;
    std::string serial();
    void informations() const;
};


class Head
{
private:
    std::string _serial;
    bool _functionnal;
public:
    Head(std::string serial = "H-01", bool functionnal = true);
    ~Head();

    bool isFunctionnal() const;
    std::string serial();
    void informations() const;
};


#endif /* !PARTS_HPP_ */
