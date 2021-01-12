/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** FruitBox
*/

#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
	private:

	public:
        FruitBox(int size);
		~FruitBox();

        int nbFruits();
        int getListSize() const { return this->m_size; }
        bool putFruit(Fruit *f);
        Fruit *pickFruit();
        FruitNode *head();
        bool checkIfInside(Fruit *fruit);
        void printList();

	protected:
        FruitNode *m_listFruit;
        int m_size;
        int m_maxSize;
};

#endif /* !FRUITBOX_HPP_ */