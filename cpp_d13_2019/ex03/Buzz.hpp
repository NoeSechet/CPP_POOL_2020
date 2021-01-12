/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** Buzz
*/

#ifndef BUZZ_HPP_
#define BUZZ_HPP_

#include "Toy.hpp"

class Buzz : public Toy {
	public:
		Buzz(const std::string name, std::string ascii = "buzz.txt");
		~Buzz();

        void speak(std::string statement) override;

	protected:
	private:
};

#endif /* !BUZZ_HPP_ */