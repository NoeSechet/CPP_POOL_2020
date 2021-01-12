/*
** EPITECH PROJECT, 2020
** ex06
** File description:
** ToyStory
*/

#ifndef TOYSTORY_HPP_
#define TOYSTORY_HPP_

#include <iostream>
#include <sstream>
#include "Toy.hpp"

class ToyStory {
	public:
		ToyStory() {}
		~ToyStory() {}

        static void tellMeAStory(const std::string file,
            Toy &toy1, bool (Toy::*func1)(std::string),
            Toy &toy2, bool (Toy::*func2)(std::string));

	protected:
	private:
};

#endif /* !TOYSTORY_HPP_ */
