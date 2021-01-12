/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Encryption
*/

#ifndef ENCRYPTION_HPP_
#define ENCRYPTION_HPP_

#include "IEncryptionMethod.hpp"
#include <string>

class Encryption {
	public:
		Encryption(IEncryptionMethod &method, void (IEncryptionMethod::*)(char));
		~Encryption();

        void operator()(char plainchar);

        static void encryptString(IEncryptionMethod &encryptionMethod, const std::string &toEncrypt);
        static void decryptString(IEncryptionMethod &encryptionMethod, const std::string &toDecrypt);

	protected:
        IEncryptionMethod &m_method;
        void (IEncryptionMethod::*m_EncDec)(char);
	private:
};

#endif /* !ENCRYPTION_HPP_ */
