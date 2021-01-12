/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character {
	private:

    public:
		Character(const std::string &name);
		~Character();

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(AEnemy *enemy);
        std::string const getName() const { return _name; }
        void printInfo() const;

	protected:
        const std::string _name;
        int _AP;
        AWeapon *_weapon;
};

std::ostream &operator<<(std::ostream &s, const Character &character);

#endif /* !CHARACTER_HPP_ */
