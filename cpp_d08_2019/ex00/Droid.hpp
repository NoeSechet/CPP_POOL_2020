/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** Droid
*/

#ifndef DROID_HPP_
#define DROID_HPP_

#include <iostream>

class Droid {
	private:
        std::string Id;
        size_t Energy;
        size_t const Attack;
        size_t const Toughness;
        std::string *Status;
	public:
        Droid(std::string id = "");
        ~Droid();

    public:
        Droid(Droid const &to_repair);

        std::string getId() const;
        size_t getEnergy() const;
        size_t getAttack() const;
        size_t getToughness() const;
        std::string *getStatus() const;

        void setId(std::string);
        void setEnergy(size_t);
        void setStatus(std::string *);

        void operator=(const Droid &droid);
        bool operator==(const Droid &droid) const;
        bool operator!=(const Droid &droid) const;
        size_t &operator<<(size_t &energy);

	protected:
};

std::ostream &operator<<(std::ostream &s, const Droid &droid);

#endif /* !DROID_HPP_ */
