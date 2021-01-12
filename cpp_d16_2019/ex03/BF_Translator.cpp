/*
** EPITECH PROJECT, 2020
** ex03
** File description:
** BF_Translator
*/

#include "BF_Translator.hpp"

BF_Translator::BF_Translator()
{
    this->m_bfMap = {
        {'>', "++ptr;"},
        {'<', "--ptr;"},
        {'+', "++*ptr;"},
        {'-', "--*ptr;"},
        {'.', "putchar(*ptr);"},
        {',', "*ptr=getchar();"},
        {'[', "while (*ptr) {"},
        {']', "}"}
    };
}

BF_Translator::~BF_Translator()
{
}

bool BF_Translator::readBfFile(const std::string &in)
{
    std::ifstream file(in);
    std::ostringstream oss;

    if (!file.is_open()) {
        std::cout << "file not found" << std::endl;
        return false;
    }
    oss << file.rdbuf();
    this->m_bfInput = oss.str();
    file.close();

    for (size_t i = 0; i < this->m_bfInput.size(); i += 1) {
        auto ite = this->m_bfMap.find(this->m_bfInput[i]);
        if (ite == this->m_bfMap.end()) {
            return false;
        }
    }
    return true;
}

int BF_Translator::translate(const std::string &in, const std::string &out)
{
    std::ofstream file(out);

    if (!this->readBfFile(in) || !file.is_open()) {
        return 1;
    }

    file << "#include <stdio.h>" << std::endl;
    file << "#include <unistd.h>" << std::endl;
    file << "#include <string.h>" << std::endl;
    file << "int main(void) {";
    file << "unsigned char tab[60001];";
    file << "bzero(tab, 60001);";
    file << "unsigned char *ptr = tab;";

    for (size_t i = 0; i < this->m_bfInput.size(); i += 1) {
        auto ite = this->m_bfMap.find(this->m_bfInput[i]);
        file << ite->second;
    }
    file << "return 0;}";
    return 0;
}