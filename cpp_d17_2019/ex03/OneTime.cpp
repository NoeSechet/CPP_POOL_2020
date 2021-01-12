/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** OneTime
*/

#include "OneTime.hpp"
#include <iostream>

OneTime::OneTime(const std::string &key)
{
    this->m_key = key;
    this->m_ite = this->m_key.begin();
}

OneTime::~OneTime()
{
}

int getIndiceLetter(char letter)
{
    if (islower(letter)) {
        return letter - 'a';
    } else if (isupper(letter)) {
        return letter - 'A';
    }
    return 0;
}

void OneTime::encryptChar(char plainchar)
{
    int toAdd = 0;

    if (islower(plainchar)) {
        toAdd = getIndiceLetter(*this->m_ite);
        if (plainchar + toAdd > 'z') {
            toAdd -= 26;
        }
        plainchar += toAdd;
    } else if (isupper(plainchar)) {
        toAdd = getIndiceLetter(*this->m_ite);
        if (plainchar + toAdd > 'Z') {   
            toAdd -= 26;
        }
        plainchar += toAdd;
    }

    if (this->m_ite + 1 == this->m_key.end()) {
        this->m_ite = this->m_key.begin();
    } else {
        this->m_ite += 1;
    }

    std::cout << plainchar;
}

void OneTime::decryptChar(char cipherchar)
{
    int toSub = 0;

    if (islower(cipherchar)) {
        toSub = getIndiceLetter(*this->m_ite);
        if (cipherchar - toSub < 'a') {
            toSub -= 26;
        }
        cipherchar -= toSub;
    } else if (isupper(cipherchar)) {
        toSub = getIndiceLetter(*this->m_ite);
        if (cipherchar - toSub < 'A') {   
            toSub -= 26;
        }
        cipherchar -= toSub;
    }
    if (this->m_ite + 1 == this->m_key.end()) {
        this->m_ite = this->m_key.begin();
    } else {
        this->m_ite += 1;
    }

    std::cout << cipherchar;
}

void OneTime::reset()
{
    this->m_ite = this->m_key.begin();
}