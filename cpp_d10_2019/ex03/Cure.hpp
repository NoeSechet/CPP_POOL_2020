/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** Cure
*/

#ifndef CURE_HPP_
#define CURE_HPP_

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		~Cure();

        AMateria * createMateria(std::string const & type);
        void learnMateria(AMateria *);

        const std :: string &getType() const { return this->m_type; }
        unsigned int getXP() const { return this->m_exp; }
        AMateria *clone() const;
        void use(ICharacter &target);

	protected:
	private:
};

#endif /* !CURE_HPP_ */
