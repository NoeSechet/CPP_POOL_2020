/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** FruitNode
*/

#ifndef FRUITNODE_HPP_
#define FRUITNODE_HPP_

#include "Fruit.hpp"

class FruitNode {
	private:

	public:
		FruitNode(Fruit *newFruit) {
            this->next = nullptr;
            this->prev = nullptr;
            this->m_fruit = newFruit;
        }
		~FruitNode() {}

        FruitNode *getNext() const { return next; }
        FruitNode *getPrev() const { return prev; }
        Fruit *getFruit() const { return this->m_fruit; }
        void setNext(FruitNode *newNode) { this->next = newNode; }

	protected:
        FruitNode *next;
        FruitNode *prev;
        Fruit *m_fruit;
};

#endif /* !FRUITNODE_HPP_ */