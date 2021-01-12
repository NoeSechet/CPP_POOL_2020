/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include <iostream>

#include "Picture.hpp"

class Toy {
	private:

	public:
        enum ToyType {
            BASIC_TOY,
            ALIEN
        };
		Toy(ToyType type);
		Toy();
		Toy(const ToyType type, const std::string name, const std::string &file);
		~Toy();

        ToyType getType() const { return this->m_type; }
        std::string getName() const { return this->m_name; }
        void setName(std::string newName) { this->m_name = newName; }
        bool setAscii(const std::string &file);
        std::string getAscii() const { return this->m_picture.data; }

	protected:
        const ToyType m_type;
        std::string m_name;
        Picture m_picture;
};

#endif /* !TOY_HPP_ */
