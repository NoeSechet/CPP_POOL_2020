/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Sorcerer
*/

#ifndef SORCERER_HPP_
#define SORCERER_HPP_

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {
	private:
        std::string _name;
        std::string _title;
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();

        std::string getName() const { return _name; }
        std::string getTitle() const { return _title; }
        void setName(std::string newName);
        void setTitle(std::string newTitle);
        void printInfo() const;
        void polymorph(const Victim &victim) const;

	protected:
};

std::ostream &operator<<(std::ostream &s, Sorcerer const &sorcerer);

#endif /* !SORCERER_HPP_ */
