/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** KoalaDoctor
*/

#include "KoalaDoctor.hpp"

const std::string medicin_name[] = {
    "Mars",
    "Buronzand",
    "Viagra",
    "Extasy",
    "Eucalyptus leaf"
};

KoalaDoctor::KoalaDoctor(std::string name)
    : m_name(name), m_status(0)
{
    std::cout << "Dr." << m_name << ": I'm Dr." << m_name <<
        "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

std::string KoalaDoctor::getName(void)
{
    return m_name;
}


void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::string koala_name = patient->getName();

    srand (time(NULL));
    std::cout << "Dr." << m_name << ": So what's goerking you Mr." <<
        koala_name << "?" << std::endl;
    patient->poke();
    koala_name.append(".report");

    std::ofstream file(koala_name);

    file << medicin_name[rand() % 5];
}

void KoalaDoctor::timeCheck(void)
{
    if (!m_status)
    {
        std::cout << "Dr." << m_name << ": Time to get to work!" << std::endl;
    } else {
        std::cout << "Dr." << m_name << 
            ": Time to go home to my eucalyptus forest!" << std::endl;
    }
    m_status = !m_status;
}