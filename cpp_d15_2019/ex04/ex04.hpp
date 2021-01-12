/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex04
*/

#ifndef EX04_HPP_
#define EX04_HPP_

#include <iostream>

template<typename T>
class Tester
{
    public:
        bool equal(const T &obj1, const T &obj2);
};

template<typename T>
bool equal(const T &obj1, const T &obj2);

#endif /* !EX04_HPP_ */