/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** find
*/

#ifndef FIND_HPP_
#define FIND_HPP_

#include <iterator>
#include <iostream>
#include <algorithm>

template<typename T>
auto do_find(T &container, int nb)
{
    return std::find(container.begin(), container.end(), nb);
}

#endif /* !FIND_HPP_ */
