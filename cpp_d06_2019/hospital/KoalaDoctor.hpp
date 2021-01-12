/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaDoctor
*/

#ifndef KOALADOCTOR_HPP_
#define KOALADOCTOR_HPP_

#include <iostream>
#include <fstream>
#include "SickKoala.hpp"

class KoalaDoctor {
	private:
        std::string m_name;
        bool m_status;
	public:
		KoalaDoctor(std::string name);
		~KoalaDoctor();

        std::string getName(void);
        void diagnose(SickKoala *patient);
        void timeCheck(void);

	protected:
};

#endif /* !KOALADOCTOR_HPP_ */
