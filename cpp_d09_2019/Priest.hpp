/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Priest
*/

#ifndef PRIEST_HPP_
#define PRIEST_HPP_

#include "Mage.hpp"

class Priest : virtual public Mage {
	public:
		Priest(const std::string &name, int level);
		~Priest();

        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();

	protected:
	private:
};

#endif /* !PRIEST_HPP_ */
