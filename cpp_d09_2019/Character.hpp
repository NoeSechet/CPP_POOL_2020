/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>

class Character {

	private:
        
	public:
        enum AttackRange {
            CLOSE,
            RANGE
        };
        Character(const std::string &name, int level);
		~Character();

        const std::string &getName() const { return m_name; }
        int getLvl() const { return m_level; }
        int getPv() const { return m_PV; }
        int getPower() const { return m_power; }

        int CloseAttack();
        int RangeAttack();
        void Heal();
        void RestorePower();

        void TakeDamage(int damage);
        AttackRange Range = CLOSE;

	protected:
        const std::string m_name;
        int m_level;
        std::string m_Class;
        std::string m_Race;
        int m_PV = 100;
        int m_power = 100;
        int m_strength;
        int m_stamina;
        int m_intelligence;
        int m_spirit;
        int m_agility;

};

#endif /* !CHARACTER_HPP_ */
