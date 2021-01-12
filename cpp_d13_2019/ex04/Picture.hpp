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
#include <sstream>

class Picture {
	private:

	public:
		Picture();
        Picture(const Picture &picToCopy);
		~Picture();

        bool getPictureFromFile (const std::string &file);
        Picture(const std::string &file);
        std::string getData() const { return this->data; }
        void setData(std::string newData) { this->data = newData; }
        Picture &operator=(const Picture &toCopy);

        std::string data;
	protected:
};

#endif /* !PICTURE_HPP_ */
