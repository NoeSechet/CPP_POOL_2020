/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KoalaBot
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    _serial = serial;
}

KoalaBot::~KoalaBot()
{
}

void KoalaBot::setParts(Arms &const arms)
{
    _arms = arms;
}
void KoalaBot::setParts(Legs &const legs)
{
    _legs = legs;
}
void KoalaBot::setParts(Head &const head)
{
    _head = head;
}

void KoalaBot::swapParts(Arms &arms)
{
    Arms temp = _arms;
    _arms = arms;
    arms = temp;
}
void KoalaBot::swapParts(Legs &legs)
{
    Legs temp = _legs;
    _legs = legs;
    legs = temp;
}
void KoalaBot::swapParts(Head &head)
{
    Head temp = _head;
    _head = head;
    head = temp;
}

void KoalaBot::informations() const
{
    std::cout << "[KoalaBot] " << _serial << std::endl;
    _arms.informations();
    _legs.informations();
    _head.informations();
}

bool KoalaBot::status() const
{
    if (_arms.isFunctionnal() && _legs.isFunctionnal() && _head.isFunctionnal())
        return true;
    return false;
}