/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** MateriaSource
*/

#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"
#include <iostream>
#include <vector>

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		~MateriaSource();

        AMateria *createMateria(std::string const & type);
        void learnMateria(AMateria *);

	protected:
        std::vector<AMateria *> m_listLearnedMateria;
	private:
};

#endif /* !MATERIASOURCE_HPP_ */
