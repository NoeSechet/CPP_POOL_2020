/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Encryption
*/

#include "Encryption.hpp"
#include <algorithm>
#include <iostream>

Encryption::Encryption(IEncryptionMethod &method, void (IEncryptionMethod::*EncDec)(char plainchar))
    : m_method(method), m_EncDec(EncDec)
{
    m_method.reset();
}

Encryption::~Encryption()
{
}

void Encryption::operator()(char plainchar)
{
    (this->m_method.*this->m_EncDec)(plainchar);
}

void Encryption::encryptString(IEncryptionMethod &encryptionMethod, const std::string &toEncrypt)
{
    Encryption truc(encryptionMethod, &IEncryptionMethod::encryptChar);
    std::for_each(toEncrypt.begin(), toEncrypt.end(), truc);
    std::cout << '\n';
}

void Encryption::decryptString(IEncryptionMethod &encryptionMethod, const std::string &toDecrypt)
{
    Encryption truc(encryptionMethod, &IEncryptionMethod::decryptChar);
    std::for_each(toDecrypt.begin(), toDecrypt.end(), truc);
    std::cout << '\n';
}