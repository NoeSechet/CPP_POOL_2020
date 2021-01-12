/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Cesar
*/

#include "Cesar.hpp"

Cesar::Cesar()
{
}

Cesar::~Cesar()
{
}

// Encode the given character , and display it.
void Cesar::encryptChar(char plainchar)
{
    int toInc = this->m_CripVal % 26;

    if (islower(plainchar)) {
        if (plainchar + toInc > 'z')
            toInc -= 26;
        plainchar += toInc;
    } else if (isupper(plainchar)) {
        if (plainchar + toInc > 'Z')
            toInc -= 26;
        plainchar += toInc;
    }
    this->m_CripVal += 1;

    std::cout << plainchar;
}

// Decode the given character , and display it.
void Cesar::decryptChar(char cipherchar)
{
    int toDec = m_CripVal % 26;

    if (islower(cipherchar)) {
        if (cipherchar - toDec < 'a')
            toDec -= 26;
        cipherchar -= toDec;
    } else if (isupper(cipherchar)) {
        if (cipherchar - toDec < 'A')
            toDec -= 26;
        cipherchar -= toDec;
    }

    this->m_CripVal += 1;

    std::cout << cipherchar;
}

// Reset the internal values to their initial state.
void Cesar::reset()
{
    this->m_CripVal = 3;
}