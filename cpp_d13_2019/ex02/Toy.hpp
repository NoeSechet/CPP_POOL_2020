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
	public:
        enum ToyType {
            BASIC_TOY,
            ALIEN,
            BUZZ,
            WOODY
        };
		Toy();
		Toy(const Toy &toyToCopy);
		Toy(const ToyType type, const std::string name, const std::string &file);
		~Toy();

        ToyType getType() const { return this->m_type; }
        std::string getName() const { return this->m_name; }
        void setName(std::string newName) { this->m_name = newName; }
        bool setAscii(const std::string &file);
        std::string getAscii() const { return this->m_picture.data; }

        Toy &operator=(const Toy &toCopy);

	protected:
        const ToyType m_type; // PEUT ETRE RETIRE LE const
        std::string m_name;
        Picture m_picture;
    private:
};

#endif /* !TOY_HPP_ */
