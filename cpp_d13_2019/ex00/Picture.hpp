/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Picture
*/

#ifndef PICTURE_HPP_
#define PICTURE_HPP_

#include <iostream>
#include <fstream>

class Picture {
	private:

	public:
		Picture();
		~Picture();

        bool getPictureFromFile (const std::string &file);
        Picture(const std::string &file);
        std::string data;

	protected:
};

#endif /* !PICTURE_HPP_ */
