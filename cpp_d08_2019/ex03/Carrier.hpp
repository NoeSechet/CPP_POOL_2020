/*
** EPITECH PROJECT, 2020
** ex03
** File description:
** Carrier
*/

#ifndef CARRIER_HPP_
#define CARRIER_HPP_

#include <iostream>
#include "Droid.hpp"

class Carrier {
	private:
        std::string Id;
        size_t Energy;
        const size_t Attack;
        const size_t Toughness;
        size_t Speed;
        Droid *Droids[5];
        void adaptVaisselSpeed();

	public:
		Carrier(std::string Id = "");
		~Carrier();

        std::string getId() const { return this->Id; }
        size_t getEnergy() const { return this->Energy; }
        size_t getSpeed() const { return this->Speed; }

        void printCarrierInfo() const;
        size_t getNbDroidsOnBoard() const;
        Carrier &operator<<(Droid * &droidToBoard);
        Carrier &operator>>(Droid * &droidToDisembark);
        Droid *&operator[](const size_t &spot);
        Droid * const &operator[](const size_t &spot) const;
        Carrier &operator~();
        bool operator()(int x, int y);
        size_t &operator<<(size_t &newEnergy);

	protected:
};

std::ostream& operator<<(std::ostream &s, Carrier const &carrier);

#endif /* !CARRIER_HPP_ */
