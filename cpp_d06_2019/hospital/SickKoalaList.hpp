/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** SickKoalaList
*/

#ifndef SICKKOALALIST_HPP_
#define SICKKOALALIST_HPP_

#include <iostream>
#include <iomanip>
#include "SickKoala.hpp"

class SickKoalaList {
	private:
        SickKoala *m_Koala;
        SickKoalaList *m_next;
	public:
		SickKoalaList(SickKoala *my_koala);
		~SickKoalaList();

        bool isEnd(void);
        void append(SickKoalaList *new_koala);
        SickKoala *getFromName(std::string koala_name);
        SickKoalaList *remove(SickKoalaList *to_remove);
        SickKoalaList *removeFromName(std::string koala_name);
        SickKoala *getContent(void);
        SickKoalaList *getNext(void);
        void dump(void);

	protected:
};

#endif /* !SICKKOALALIST_HPP_ */