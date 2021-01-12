/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Fruit
*/

#ifndef FRUIT_HPP_
#define FRUIT_HPP_

#include "iostream"

class Fruit {
	private:

	public:
		Fruit(int vitamins, std::string name);
		virtual ~Fruit();

        std::string getName() const { return this->m_name; }
        int getVitamins() const { return this->_vitamins; }
        // void setVitamins(int vitamins) { this->m_vitamins = vitamins; }

        Fruit &operator=(const Fruit &toCopy);

	protected:
        int _vitamins;
        std::string m_name;
};

#endif /* !FRUIT_HPP_ */
