/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaNurse
*/

#ifndef KOALANURSE_HPP_
#define KOALANURSE_HPP_

#include <iostream>
#include <fstream>
#include "SickKoala.hpp"

class KoalaNurse {
	private:
        int m_ID;
        bool m_status;
	public:
		KoalaNurse(int ID);
		~KoalaNurse();

        int getID(void);
        void giveDrug(std::string drug, SickKoala *patient);
        std::string readReport(std::string filename);
        void timeCheck(void);

	protected:
};

#endif /* !KOALANURSE_HPP_ */
