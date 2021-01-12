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

FruitBox * const *LittleHand::organizeCoconut(Coconut const * const *coconuts)
{
    size_t nbCoconuts = 0;
    size_t nbBoxes = 0;
    size_t parserCoco = 0;

    for (size_t i = 0; coconuts[i]; i += 1) {
        nbCoconuts += 1;
    }
    nbBoxes = nbCoconuts / 6;
    nbCoconuts % 6 != 0 ? nbBoxes += 1 : 0;

    FruitBox **res = new FruitBox*[nbBoxes + 1];

    for (size_t i = 0; i < nbBoxes; i += 1) {
        res[i] = new FruitBox(6);
        for (size_t j = 0; j < 6 && nbCoconuts > 0; j += 1, parserCoco += 1, nbCoconuts -= 1) {
            std::cout << coconuts[parserCoco]->getName() << std::endl;
            res[i]->putFruit(coconuts[parserCoco]);
        }
    }

    res[nbBoxes] = nullptr;

    return res;
}