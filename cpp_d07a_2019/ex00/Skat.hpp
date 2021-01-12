/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Skat
*/

#ifndef SKAT_HPP_
#define SKAT_HPP_

#include <iostream>

class Skat {
	private:
        std::string _name;
        int _stimPaks;
	public:
		Skat(const std::string &name = "bob", int stimPaks = 15);
		~Skat();

        const std::string &name();
        int &stimPaks();
        void shareStimPaks(int number , int& stock);
        void addStimPaks(unsigned int number);
        void useStimPaks();
        void status();

	protected:
};

#endif /* !SKAT_HPP_ */
