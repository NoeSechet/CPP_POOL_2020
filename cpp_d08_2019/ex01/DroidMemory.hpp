/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** DroidMemory
*/

#ifndef DROIDMEMORY_HPP_
#define DROIDMEMORY_HPP_

#include <iostream>

class DroidMemory {
	private:
        size_t Fingerprint;
        size_t Exp;

	public:
		DroidMemory();
		~DroidMemory();

        size_t getFingerprint() const { return Fingerprint; }
        size_t getExp() const { return Exp; }
        void setFingerprint(size_t newFingerprint) { Fingerprint = newFingerprint; }
        void setExp(size_t newExp) { Exp = newExp; }
        DroidMemory &operator<<(DroidMemory &);
        DroidMemory &operator>>(DroidMemory &);
        DroidMemory &operator+=(DroidMemory &);
        DroidMemory &operator+=(size_t );
        DroidMemory operator+(const DroidMemory &mem) const;
        DroidMemory operator+(const size_t ) const;
	protected:
};

std::ostream& operator<<(std::ostream &s, const DroidMemory &droid);

#endif /* !DROIDMEMORY_HPP_ */