/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** AEnemy
*/

#ifndef AENEMY_HPP_
#define AENEMY_HPP_

#include <iostream>

class AEnemy {
	private:
	
    public:
		AEnemy(int hp, const std::string &type);
		virtual ~AEnemy();
        virtual void takeDamage(int damage);
        virtual const std::string getType() const { return _type; }
        int getHP() const { return _HP; }

	protected:
        const std::string _type;
        int _HP;
};

#endif /* !AENEMY_HPP_ */
