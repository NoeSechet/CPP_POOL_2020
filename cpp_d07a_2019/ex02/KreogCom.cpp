/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KreogCom
*/

#include "KreogCom.hpp"

KreogCom::KreogCom(int x, int y, int serial)
    : m_serial(serial)
{
    m_x = x;
    m_y = y;
    m_next = nullptr;
    m_prev = nullptr;

    std::cout << "KreogCom " << m_serial << " initialized" << std::endl;
}

KreogCom::~KreogCom()
{
    std::cout << "KreogCom " << m_serial << " shutting down" << std::endl;
}

void KreogCom::addCom(int x, int y, int serial)
{
    KreogCom *new_node = new KreogCom(x, y, serial);

    if (!m_next) {
        m_next = new_node;
        new_node->m_prev = this;
    } else {
        new_node->m_next = m_next;
        new_node->m_prev = this;

        m_next->m_prev = new_node;
        m_next = new_node;
    }
}

void KreogCom::removeCom()
{
    KreogCom *temp = this->m_next;
    if (!this->m_next)
        return;
    
    if (this->m_next->m_next) {
        this->m_next->m_next->m_prev = this;
        this->m_next = m_next->m_next;
    } else {
        temp->m_next = nullptr;
        temp->m_prev = nullptr;
    }
    delete(temp);
}

KreogCom *KreogCom::getCom()
{
    if (m_next)
        return m_next;
    return nullptr;
}

void KreogCom::ping()
{
    std::cout << "KreogCom " << m_serial << " currently at "
        << m_x << " " << m_y << std::endl;
}

void KreogCom::locateSquad()
{
    for (KreogCom *temp = m_next; temp; temp = temp->m_next) {
        temp->ping();
    }

    ping();
}