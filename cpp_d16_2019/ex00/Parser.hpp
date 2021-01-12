/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Parser
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <iostream>
#include <stack>

class Parser {
	public:
		Parser();
		~Parser();

        bool isDigit(char c);
        bool isOpera(char c);

        void feed(const std::string &);
        int result() const;
        void reset();
        void clearstr();


	protected:
        int operand1 = 0;
        int operand2 = 0;

        std::stack<int> m_listval;
        std::stack<short> m_listop;

        std::stack<int> m_operhands; // previous calcs
        int m_result = 0;

        std::string m_expression;
	private:
};

#endif /* !PARSER_HPP_ */
