/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KreogCom
*/

#ifndef KREOGCOM_HPP_
#define KREOGCOM_HPP_

#include <iostream>

class KreogCom {
	private:
        const int m_serial;
        int m_x;
        int m_y;
        KreogCom *m_next;
        KreogCom *m_prev;
	public:
		KreogCom(int x, int y, int serial);
		~KreogCom();

        void addCom (int x , int y , int serial ) ;
        void removeCom();
        KreogCom *getCom();
        void ping();
        void locateSquad();

	protected:
};

#endif /* !KREOGCOM_HPP_ */