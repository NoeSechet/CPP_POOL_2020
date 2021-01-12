/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** FruitBox
*/

#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_

#include "FruitNode.hpp"

class FruitBox {
	private:

	public:
        FruitBox(int size);
		~FruitBox();

        FruitNode *getList() const { return this->m_listFruit; }
        int nbFruits() const;
        bool putFruit(Fruit *f);
        Fruit *pickFruit();
        FruitNode *head() const;
        bool checkIfInside(Fruit *fruit);
        void printList() const;

	protected:
        FruitNode *m_listFruit;
        int m_maxSize;
};

#endif /* !FRUITBOX_HPP_ */