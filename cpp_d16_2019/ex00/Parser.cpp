/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Parser
*/

#include "Parser.hpp"

Parser::Parser()
{
}

Parser::~Parser()
{
}

bool Parser::isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

bool Parser::isOpera(char c)
{
    return (c == '+' || c == '-' ||
            c == '*' || c == '/' || c == '%' ||
            c == '(' || c == ')');
}

int calculate(int operand1, int operand2, char opera)
{
    switch (opera)
    {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
        case '%': return operand1 % operand2;
        default: break;
    }
    return -1;
}

void Parser::reset()
{
    for (; this->m_operhands.size() > 0; ) {
        this->m_operhands.pop();
    }
}

int Parser::result() const
{
    int result = 0;
    std::stack<int> copy = this->m_operhands;

    for (; copy.size() > 0; ) {
        result += copy.top();
        copy.pop();
    }

    return result;
}

void my_get_nbr(std::string &expression, size_t &i, int &val)
{
    int resnbr = 0;

    for (; isdigit(expression[i]); i += 1) {
        resnbr = resnbr * 10 + expression[i] - '0';
    }
    val = resnbr;
}

void Parser::feed(const std::string &str)
{
    this->m_expression = str;
    clearstr();

    size_t i = 0;
    int val = 0;

    for (; i < this->m_expression.length(); i += 1)
    {
        char spot = this->m_expression[i];
        if (isdigit(spot))
        {
            my_get_nbr(m_expression, i, val);
            this->m_listval.push(val);
            val = 0;
            i -= 1;
        }
        else if (isOpera(spot) && spot != ')' && spot != '(')
        {
            this->m_listop.push(spot);
        }
        if (spot == '(')
        {
            this->m_listop.push(spot);
        }
        if (spot == ')')
        {
            int nb2 = this->m_listval.top();
            this->m_listval.pop();
            int nb1 = this->m_listval.top();
            val = calculate(nb1, nb2, this->m_listop.top());
            this->m_listop.pop();
            this->m_listop.pop();

            this->m_listval.pop();
            this->m_listval.push(val);
            val = 0;
        }
    }
    this->m_operhands.push(this->m_listval.top());
}

void Parser::clearstr()
{
    std::string search = " ";
    std::string replace = "";
    size_t p = this->m_expression.find(search);

    while (p != std::string::npos) {
		this->m_expression.replace(p, search.size(), replace);
		p = this->m_expression.find(search, p + replace.size());
	}
}