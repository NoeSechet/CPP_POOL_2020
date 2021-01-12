/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** PlasmaRifle
*/

#ifndef PLASMARIFLE_HPP_
#define PLASMARIFLE_HPP_

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	private:

	public:
		PlasmaRifle();
		~PlasmaRifle();

        void attack() const;

	protected:
};

#endif /* !PLASMARIFLE_HPP_ */
