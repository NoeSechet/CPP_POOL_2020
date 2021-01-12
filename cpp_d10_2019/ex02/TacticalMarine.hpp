/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** TacticalMarine
*/

#ifndef TACTICALMARINE_HPP_
#define TACTICALMARINE_HPP_

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	private:

	public:
		TacticalMarine();
        ~TacticalMarine();

        TacticalMarine *clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;

	protected:
};

#endif /* !TACTICALMARINE_HPP_ */
