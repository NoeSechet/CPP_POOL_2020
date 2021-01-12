/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaDoctorList
*/

#ifndef KOALADOCTORLIST_HPP_
#define KOALADOCTORLIST_HPP_

#include "KoalaDoctor.hpp"

class KoalaDoctorList {
	private:
        KoalaDoctor *m_Doctor;
        KoalaDoctorList *m_Next;
	public:
		KoalaDoctorList(KoalaDoctor *new_Doctor);
		~KoalaDoctorList();

        bool isEnd(void);
        void append(KoalaDoctorList *new_Doctor);
        KoalaDoctor *getFromName(std::string doctor_Name);
        KoalaDoctorList *remove(KoalaDoctorList *to_remove);
        KoalaDoctorList *removeFromName(std::string doctor_Name);
        void dump(void);


	protected:
};

#endif /* !KOALADOCTORLIST_HPP_ */
