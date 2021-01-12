/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** Woody
*/

#ifndef WOODY_HPP_
#define WOODY_HPP_

#include "Toy.hpp"

class Woody : public Toy {
	public:
		Woody(const std::string name, std::string ascii = "woody.txt");
		~Woody();

        void speak(std::string statement) override;

	protected:
	private:
};

#endif /* !WOODY_HPP_ */