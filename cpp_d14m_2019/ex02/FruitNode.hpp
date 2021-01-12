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
            this->m_fruit = newFruit;
        }
		~FruitNode() {}

        // FruitNode *getPrev() const { return m_prev; }
        Fruit *getFruit() const { return this->m_fruit; }
        void setFruit(Fruit *newFruit) { this->m_fruit = newFruit; }
        FruitNode *next;
        Fruit *m_fruit;

	protected:
};

#endif /* !FRUITNODE_HPP_ */