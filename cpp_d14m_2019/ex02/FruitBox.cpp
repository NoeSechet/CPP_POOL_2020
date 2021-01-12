/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** FruitBox
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size)
{
    this->m_maxSize = size;
    this->m_listFruit = nullptr;
}

FruitBox::~FruitBox()
{
}

int FruitBox::nbFruits() const
{
    int counter = 1;

    if (this->m_listFruit == nullptr)
        return 0;
    for (FruitNode *temp = this->m_listFruit; temp->next; temp = temp->next) {
        counter += 1;
    }
    return counter;
}

bool FruitBox::checkIfInside(Fruit const *fruit) const
{
    FruitNode *temp = this->m_listFruit;
    if (temp == nullptr)
        return false;
    
    for (; temp->next; temp = temp->next) {
        if (temp->getFruit() == fruit) {
            return true;
        }
    }
    return false;
}

bool FruitBox::putFruit(Fruit const *newFruit)
{
    FruitNode *temp = this->m_listFruit;

    if (newFruit == nullptr || checkIfInside(newFruit) == 1 || nbFruits() > m_maxSize) {
        return false;
    }

    Fruit myFruit(*newFruit);
    FruitNode *newNode = new FruitNode(&myFruit);

    if (this->m_listFruit == nullptr) {
        this->m_listFruit = newNode;
        return true;
    }
    for (; temp->next; temp = temp->next);
    temp->next = newNode;
    return true;
}

Fruit *FruitBox::pickFruit()
{
    FruitNode *temp = this->m_listFruit;
    Fruit *pickedFruit = nullptr;

    if (this->m_listFruit == nullptr)
        return nullptr;
    pickedFruit = temp->getFruit();
    this->m_listFruit = this->m_listFruit->next;

    return pickedFruit;
}

FruitNode *FruitBox::head() const
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

    for (; temp; temp = temp->next) {
        if (temp->getFruit() != nullptr) {
            std::cout << temp->getFruit()->getName() << ": " <<
                temp->getFruit()->getVitamins() << std::endl;
        }
    }
}