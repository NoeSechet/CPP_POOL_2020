/*
** EPITECH PROJECT, 2020
** ex01
** File description:
** DomesticKoala
*/

#ifndef DOMESTICKOALA_HPP_
#define DOMESTICKOALA_HPP_

#include <iostream>
#include <vector>
#include <map>
#include "KoalaAction.hpp"

using methodPointer_t = void (KoalaAction::*)(const std::string &);

class DomesticKoala {
	public:
		DomesticKoala(KoalaAction &);
		~DomesticKoala();

        DomesticKoala(const DomesticKoala &);
        DomesticKoala &operator=(const DomesticKoala &);

        void eraseActionList();

        const std::vector<methodPointer_t> *getActions() const;
        void learnAction(unsigned char command, void (KoalaAction::*action)(const std::string &));
        void unlearnAction(unsigned char command);
        void doAction(unsigned char command, const std::string &param);
        void setKoalaAction(KoalaAction &);

	protected:
        KoalaAction &m_ActionK;
        std::vector<unsigned char> m_listCommand;
        std::vector<methodPointer_t> m_listAction;
	private:
};

#endif /* !DOMESTICKOALA_HPP_ */
