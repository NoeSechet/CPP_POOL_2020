/*
** EPITECH PROJECT, 2020
** ex04
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>
#include <vector>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character(const std::string name);
		Character(const Character &toCopy);
		~Character();

        std::string const &getName() const { return this->m_name; }
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        Character operator=(const Character &toCopy);
        void copyListFromCopy(const Character &toCopy);

	protected:
        std::vector<AMateria *> m_listMateria;
        const std::string m_name;
	private:
};

#endif /* !CHARACTER_HPP_ */
