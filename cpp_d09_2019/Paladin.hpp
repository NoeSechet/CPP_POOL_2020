/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Paladin
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_

#include "Priest.hpp"
#include "Warrior.hpp"

class Paladin : virtual public Warrior, virtual public Priest {
	private:
	public:
		Paladin(const std::string &name, size_t level, const std::string &weaponName = "hammer");
		~Paladin();

        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();
        int Intercept();

	protected:
};

#endif /* !PALADIN_HPP_ */
