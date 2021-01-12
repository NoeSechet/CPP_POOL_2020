/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** Droid
*/

#ifndef DROID_HPP_
#define DROID_HPP_

#include <iostream>
#include "DroidMemory.hpp"

class Droid {
	private:
        std::string Id;
        size_t Energy;
        size_t const Attack;
        size_t const Toughness;
        std::string *Status;
        DroidMemory *BattleData;
	public:
        Droid(std::string id);
        ~Droid();

    public:
        Droid(Droid const &to_repair);

        size_t getEnergy() const { return Energy; }
        size_t getAttack() const { return Attack; }
        size_t getToughness() const { return Toughness; }
        std::string *getStatus() const { return Status; }
        std::string getId() const { return Id; }

        DroidMemory *getBattleData() const { return BattleData; }
        void setBattleData(DroidMemory *new_memory);

        void setId(std::string new_id) { Id = new_id; }
        void setEnergy(size_t new_energy);
        void setStatus(std::string *new_status);

        void operator=(const Droid &droid);
        bool operator==(const Droid &droid) const;
        bool operator!=(const Droid &droid) const;
        size_t &operator<<(size_t &energy);

	protected:
};

std::ostream& operator<<(std::ostream &s, const Droid &droid);

#endif /* !DROID_HPP_ */