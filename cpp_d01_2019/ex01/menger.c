/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** menger
*/

#include "stdio.h"

int menger(int sizeS, int nbLevel, int xcoord, int ycoord)
{
    printf("%.3d %.3d %.3d\n", sizeS, xcoord, ycoord);
    if (sizeS > 1 && nbLevel > 1) {
        menger(sizeS / 3, nbLevel - 1,
        xcoord - (2 * sizeS / 3), ycoord - (2 * sizeS / 3));
        menger(sizeS / 3, nbLevel - 1,
        xcoord - (2 * sizeS / 3), ycoord + sizeS / 3);
        menger(sizeS / 3, nbLevel - 1,
        xcoord - (2 * sizeS / 3), ycoord + (sizeS + sizeS / 3));
        menger(sizeS / 3, nbLevel - 1,
        xcoord + sizeS / 3, ycoord - (2 * sizeS / 3));
        menger(sizeS / 3, nbLevel - 1,
        xcoord + sizeS / 3, ycoord + sizeS + sizeS / 3);
        menger(sizeS / 3, nbLevel - 1,
        xcoord + sizeS + sizeS / 3, ycoord - (2 * sizeS / 3));
        menger(sizeS / 3, nbLevel - 1,
        xcoord + sizeS + sizeS / 3, ycoord + sizeS / 3);
        menger(sizeS / 3, nbLevel - 1,
        xcoord + sizeS + sizeS / 3, ycoord + sizeS + sizeS / 3);
    }
    return (1);
}