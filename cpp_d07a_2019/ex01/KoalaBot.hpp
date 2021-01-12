/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KoalaBot
*/

#ifndef KOALABOT_HPP_
#define KOALABOT_HPP_

#include "Parts.hpp"

class KoalaBot {
	private:
        std::string _serial;
        Arms _arms;
        Legs _legs;
        Head _head;
	public:
		KoalaBot(std::string serial = "Bob-01");
		~KoalaBot();

        void setParts(Arms &const arms);
        void setParts(Legs &const legs);
        void setParts(Head &const head);

        void swapParts(Arms &_arms);
        void swapParts(Legs &_legs);
        void swapParts(Head &_head);

        void informations() const;
        bool status() const;

	protected:
};

#endif /* !KOALABOT_HPP_ */
