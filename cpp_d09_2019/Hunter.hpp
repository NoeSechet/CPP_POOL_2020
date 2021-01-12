/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Hunter
*/

#ifndef HUNTER_HPP_
#define HUNTER_HPP_

#include "Warrior.hpp"

class Hunter : public Warrior {
	private:
	public:
		Hunter(const std::string &name, size_t level, const std::string &weaponName = "sword");
		~Hunter();

        int CloseAttack();
        int RangeAttack();
        void RestorePower();

	protected:
};

#endif /* !HUNTER_HPP_ */
