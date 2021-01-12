/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** LittleHand
*/

#include "LittleHand.hpp"

LittleHand::LittleHand()
{
}

LittleHand::~LittleHand()
{
}

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
    FruitNode *temp = unsorted.getList();
    FruitBox *saveUnsorted = nullptr;
    Fruit *fruitToMove = nullptr;

    if (temp == nullptr)
        return;

    for (; (fruitToMove = unsorted.pickFruit()) != nullptr; ) {

        if (fruitToMove->getName().compare("lemon") == 0) {
            if (lemons.putFruit(fruitToMove) == false)
                saveUnsorted->putFruit(temp->getFruit());
        }
        if (fruitToMove->getName().compare("banana") == 0) {
            if (bananas.putFruit(fruitToMove) == false)
                saveUnsorted->putFruit(temp->getFruit());
        }
        if (fruitToMove->getName().compare("lime") == 0) {
            if (limes.putFruit(fruitToMove) == false)
                saveUnsorted->putFruit(temp->getFruit());
        }
    }
    for (; (fruitToMove = unsorted.pickFruit()) != nullptr; ) {
        unsorted.putFruit(fruitToMove);
    }
}