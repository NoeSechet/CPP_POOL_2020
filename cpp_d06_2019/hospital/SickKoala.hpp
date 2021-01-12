/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** SickKoala
*/

#ifndef SICKKOALA_HH_
#define SICKKOALA_HH_

#include <iostream>
#include <algorithm>
#include <string>

class SickKoala {
	private:
		std::string m_name;
	public:
		SickKoala(std::string name);
		~SickKoala();

		std::string getName(void);


		void poke(void);
		bool takeDrug(std::string str);
		void overDrive(std::string str);

	protected:
};

#endif /* !SICKKOALA_HH_ */
