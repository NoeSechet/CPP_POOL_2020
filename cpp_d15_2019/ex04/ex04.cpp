/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex04
*/

#include "ex04.hpp"

template<>
bool equal<int>(const int &obj1, const int &obj2)
{
    return obj1 == obj2;
}

template<>
bool equal<float>(const float &obj1, const float &obj2)
{
    return obj1 == obj2;
}

template<>
bool equal<double>(const double &obj1, const double &obj2)
{
    return obj1 == obj2;
}

template<>
bool equal<std::string>(const std::string &obj1, const std::string &obj2)
{
    return obj1 == obj2;
}

template<>
bool Tester<int>::equal(const int &obj1, const int &obj2)
{
    return (obj1 == obj2);
}

template<>
bool Tester<float>::equal(const float &obj1, const float &obj2)
{
    return (obj1 == obj2);
}

template<>
bool Tester<double>::equal(const double &obj1, const double &obj2)
{
    return (obj1 == obj2);
}

template<>
bool Tester<std::string>::equal(const std::string &obj1, const std::string &obj2)
{
    return (obj1 == obj2);
}
