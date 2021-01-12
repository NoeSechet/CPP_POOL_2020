/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** Ice
*/

#ifndef ICE_HPP_
#define ICE_HPP_

#include "AMateria.hpp"

class Ice : public AMateria {
	private:

	public:
		Ice();
		~Ice();

        AMateria * createMateria(std::string const & type);
        void learnMateria(AMateria *);

        const std :: string &getType() const { return this->m_type; }
        unsigned int getXP() const { return this->m_exp; }
        AMateria *clone() const;
        void use(ICharacter &target);

	protected:
};

#endif /* !ICE_HPP_ */
