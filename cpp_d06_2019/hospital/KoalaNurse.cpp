/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaNurse
*/

#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int ID)
    : m_ID(ID), m_status(false)
{
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse "<< m_ID << ": Finally some rest!" << std::endl;
}

int KoalaNurse::getID(void)
{
    return m_ID;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala *patient)
{
    patient->takeDrug(drug);
}

void replace_string(std::string& str, std::string origin, std::string substitute)
{
    int pos = 0;

    while ((pos = str.find(origin, pos)) != -1) {
        str.replace(pos, origin.length(), substitute);
        pos += substitute.length();
    }
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::string drug_name;
    std::string copy;
    std::string line;
    std::string koala_name;
    std::ifstream file(filename);

    if (!file.is_open())
        return copy;
    while (getline(file, line))
        copy.append(line);
    file.close();
    replace_string(filename, ".report", "\0");
    if (!copy.compare("Mars") || !copy.compare("Buronzand")) {
        drug_name = copy;
        std::cout << "Nurse " << m_ID << ": Kreog! Mr." << filename <<
            " needs a " << drug_name << "!" << std::endl;
    }
    return drug_name;
}

void KoalaNurse::timeCheck(void)
{
    if (!m_status)
    {
        std::cout << "Nurse " << m_ID << ": Time to get to work!" << std::endl;
    } else {
        std::cout << "Nurse " << m_ID << 
            ": Time to go home to my eucalyptus forest!" << std::endl;
    }
    m_status = !m_status;
}