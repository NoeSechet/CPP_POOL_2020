/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex02
*/

#ifndef EX02_HPP_
#define EX02_HPP_

#include <iostream>

template<typename T>
T min(T a, T b) {
    std::cout << "template min" << std::endl;
    if (a == b)
        return a;
    else if (a < b)
        return a;
    else
        return b;
}

template<typename T, typename U>
T templateMin(T *str, U len) {
    if (!str) {
        return 0;
    }
    if (len == 1) {
        return str[0];
    }
    T minVal = str[0];
    T value = 0;
    for (U i = 0; i < len - 1; i += 1) {
        if ((value = min(str[i], str[i+1])) < minVal)
            minVal = value;
    }
    return minVal;
}

int min(int a, int b) {
    std::cout << "non-template min" << std::endl;
    if (a == b)
        return a;
    else if (a < b)
        return a;
    else
        return b;
}

int nonTemplateMin(int *str, int len) {
    if (!str) {
        return 0;
    }
    if (len == 1) {
        return str[0];
    }
    int minVal = str[0];
    int value = 0;
    for (int i = 0; i < len - 1; i += 1) {
        if ((value = min(str[i], str[i+1])) < minVal)
            minVal = value;
    }
    return minVal;
}

#endif /* !EX02_HPP_ */
