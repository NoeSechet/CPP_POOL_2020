/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** WarpSystem
*/

#ifndef WARPSYSTEM_HPP_
#define WARPSYSTEM_HPP_

#include <iostream>

namespace WarpSystem {

    class QuantumReactor
    {
    private:
        bool _stability = true;
    public:
        QuantumReactor();
        ~QuantumReactor();
        
        bool isStable();
        void setStability (bool stability);
    };

    class Core
    {
    private:
        QuantumReactor *_coreReactor;
    public:
        Core(QuantumReactor *new_core);
        ~Core();

        QuantumReactor *checkReactor();
    };
};

#endif /* !WARPSYSTEM_HPP_ */
