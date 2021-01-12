/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Cesar
*/

#ifndef CESAR_HPP_
#define CESAR_HPP_

#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod {
	public:
		Cesar();
		~Cesar();

        void encryptChar(char plainchar);
        void decryptChar(char cipherchar);
        void reset();

	protected:
	private:
        int m_CripVal = 3;
};

#endif /* !CESAR_HPP_ */
