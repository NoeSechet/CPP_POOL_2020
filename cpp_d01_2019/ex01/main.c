/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** main
*/

#include "menger.h"

int checkIfNumber(char const *str1, char const *str2)
{
    for (unsigned int i = 0; i < strlen(str1); i += 1)
        if (str1[i] < 48 || str1[i] > 57)
            return (0);
    for (unsigned int i = 0; i < strlen(str2); i += 1)
        if (str2[i] < 48 || str2[i] > 57)
            return (0);
    return (1);
}

int checkpowof3(int size, int nbLevel)
{
    for (int i = size, j = 0; i < 1 || j < nbLevel; i /= 3, j += 1) {
        if (i % 3 != 0) {
            printf("unvalid size : %d\n", i);
            return (0);
        }
    }
    return (1);
}

int main(int ac, char const *av[])
{
    int size = atoi(av[1]);
    int nbLevel = atoi(av[2]);

    if (ac != 3 || !checkIfNumber(av[1], av[2])) {
        return (84);
    }
    if (!checkpowof3(size, nbLevel) || size > 2187) {
        return (84);
    }
    if (!menger(size / 3, nbLevel, size / 3, size / 3)) {
        return (84);
    }
    return (0);
}
