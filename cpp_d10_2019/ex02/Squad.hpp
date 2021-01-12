/*
** EPITECH PROJECT, 2020
** ex02
** File description:
** Squad
*/

#ifndef SQUAD_HPP_
#define SQUAD_HPP_

#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include <vector>

class Squad : public ISquad {
	private:
    std::vector<ISpaceMarine *> m_listVaissel;

	public:
		Squad();
		~Squad();
        Squad(const Squad &toCopy);

        std::vector<ISpaceMarine *> getListVaissel() const { return m_listVaissel; }

        int getCount() const { return m_listVaissel.size(); }
        ISpaceMarine* getUnit(int spot);
        int push(ISpaceMarine*);
        void deleteFront();
        bool isInSquad(ISpaceMarine *newElem);

        Squad &operator=(const Squad &copy);

	protected:
};

#endif /* !SQUAD_HPP_ */
