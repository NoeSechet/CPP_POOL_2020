/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex03
*/

#ifndef EX03_HPP_
#define EX03_HPP_

#include <iostream>

template<typename T>
void print(const T &arg)
{
    std::cout << arg << std::endl;
}

template<typename T>
void foreach(T *array, void (*func)(const T &arg), int size)
{
    for (int i = 0; i < size; i += 1) {
        func(array[i]);
    }
}

#endif /* !EX03_HPP_ */
