/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** AssaultTerminator
*/

#ifndef ASSAULTTERMINATOR_HPP_
#define ASSAULTTERMINATOR_HPP_

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	private:

	public:
		AssaultTerminator();
		~AssaultTerminator();

        AssaultTerminator *clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;

	protected:
};

#endif /* !ASSAULTTERMINATOR_HPP_ */
