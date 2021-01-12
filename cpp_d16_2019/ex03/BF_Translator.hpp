/*
** EPITECH PROJECT, 2020
** ex03
** File description:
** BF_Translator
*/

#ifndef BF_TRANSLATOR_HPP_
#define BF_TRANSLATOR_HPP_

#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>

class BF_Translator {
	public:
		BF_Translator();
		~BF_Translator();

        int translate(const std::string &in, const std::string &out);
        bool readBfFile(const std::string &in);

	protected:
        std::string m_bfInput;
        std::map<unsigned char, std::string> m_bfMap;
	private:
};

#endif /* !BF_TRANSLATOR_HPP_ */
