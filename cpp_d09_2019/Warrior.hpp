/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Warrior
*/

#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_

#include "Character.hpp"

class Warrior : virtual public Character
{
	private:

	public:
		Warrior(const std::string &name, int level, const std::string &weaponName = "hammer");
		~Warrior();

        int CloseAttack();
        int RangeAttack();

	protected:
        const std::string m_weaponName;
};

#endif /* !WARRIOR_HPP_ */
