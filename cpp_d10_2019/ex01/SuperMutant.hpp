/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** SuperMutant
*/

#ifndef SUPERMUTANT_HPP_
#define SUPERMUTANT_HPP_

#include "AEnemy.hpp"

class SuperMutant : public AEnemy {
	private:
	public:
		SuperMutant();
		~SuperMutant();

        void takeDamage(int damage);

	protected:
};

#endif /* !SUPERMUTANT_HPP_ */
