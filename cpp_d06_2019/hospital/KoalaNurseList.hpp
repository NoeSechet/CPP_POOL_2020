/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaNurseList
*/

#ifndef KOALANURSELIST_HPP_
#define KOALANURSELIST_HPP_

#include "KoalaNurse.hpp"
class KoalaNurseList {
	private:
        KoalaNurse *m_Nurse;
        KoalaNurseList *m_next;
	public:
		KoalaNurseList(KoalaNurse *new_Nurse);
		~KoalaNurseList();

        bool isEnd(void);
        void append(KoalaNurseList *new_Nurse);
        KoalaNurse *getFromID(int ID);
        KoalaNurseList *remove(KoalaNurseList *to_remove);
        KoalaNurseList *removeFromID(int ID);
        void dump(void);

	protected:
};

#endif /* !KOALANURSELIST_HPP_ */
