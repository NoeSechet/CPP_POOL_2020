/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Victim
*/

#ifndef VICTIM_HPP_
#define VICTIM_HPP_

#include <iostream>

class Victim {
	private:

	public:
		Victim(std::string name);
		~Victim();

        std::string getName() const { return _name; }
        void setName(std::string newName);
        void printInfo() const;
        virtual void getPolymorphed() const;

	protected:
        std::string _name;
};

std::ostream &operator<<(std::ostream &s, Victim const &victim);

#endif /* !VICTIM_HPP_ */
