/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** AWeapon
*/

#ifndef AWEAPON_HPP_
#define AWEAPON_HPP_

#include <iostream>

class AWeapon {
	private:

	public:
		AWeapon(const std::string &name, int apcost, int damage);
		virtual ~AWeapon();

        virtual const std::string getName () const { return _name; }
        int getAPCost () const { return _APCost; }
        int getDamage () const { return _damage; }
        virtual void attack () const = 0;

	protected:
        const std::string _name;
        int _damage;
        int _APCost;
};

#endif /* !AWEAPON_HPP_ */
