/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** FruitBox
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int max_size)
{
    this->m_maxSize = max_size;
    this->m_listFruit = nullptr;
    this->m_size = 0;
}

FruitBox::~FruitBox()
{
}

int FruitBox::nbFruits()
{
    return this->m_size;
}

bool FruitBox::checkIfInside(Fruit *fruit)
{
    FruitNode *temp = this->m_listFruit;
    if (temp == nullptr)
        return false;

    for (; temp->getNext(); temp = temp->getNext()) {
        if (temp->getFruit() == fruit) {
            return true;
        }
    }
    return false;
}

bool FruitBox::putFruit(Fruit *newFruit)
{
    FruitNode *temp = this->m_listFruit;

    if (newFruit == nullptr || checkIfInside(newFruit) == 1 || nbFruits() >= m_maxSize) {
        return false;
    }

    FruitNode *newNode = new FruitNode(newFruit);

    if (this->m_listFruit == nullptr) {
        this->m_listFruit = newNode;
        this->m_size += 1;
        return true;
    }
    for (; temp->getNext(); temp = temp->getNext());
    temp->setNext(newNode);
    this->m_size += 1;
    return true;
}

Fruit *FruitBox::pickFruit()
{
    FruitNode *temp = this->m_listFruit;
    Fruit *pickedFruit = nullptr;

    if (this->m_listFruit == nullptr)
        return nullptr;
    pickedFruit = temp->getFruit();
    this->m_listFruit = this->m_listFruit->getNext();

    m_size -= 1;

    return pickedFruit;
}

FruitNode *FruitBox::head()
{
    return this->m_listFruit;
}

void FruitBox::printList()
{
    FruitNode *temp = this->m_listFruit;

    if (temp == nullptr) {
        std::cout << "No fruit found in box" << std::endl;
        return;
    }

    for (; temp; temp = temp->getNext()) {
        if (temp->getFruit() != nullptr) {
            std::cout << temp->getFruit()->getName() << ": " <<
                temp->getFruit()->getVitamins() << std::endl;
        }
    }
}