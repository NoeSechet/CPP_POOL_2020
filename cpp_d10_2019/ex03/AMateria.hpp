/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** AMateria
*/

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	public:
		AMateria(const std::string &type);
        AMateria (const AMateria &getFrom);
		virtual ~AMateria();

        const std :: string &getType() const { return this->m_type; }
        unsigned int getXP() const { return this->m_exp; }
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);

        AMateria &operator=(const AMateria &toCopy);

	protected:
        const std::string m_type;
        unsigned int m_exp;
	private:
};

#endif /* !AMATERIA_HPP_ */
