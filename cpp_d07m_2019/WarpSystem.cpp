/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** WarpSystem
*/

#include "WarpSystem.hpp"

namespace WarpSystem
{
    QuantumReactor::QuantumReactor(void)
    {
    }

    QuantumReactor::~QuantumReactor(void)
    {
    }

    bool QuantumReactor::isStable()
    {
        return _stability;
    }

    void QuantumReactor::setStability(bool stability)
    {
        _stability = stability;
    }

    Core::Core(QuantumReactor *new_core)
    {
        _coreReactor = new_core;
    }
    
    Core::~Core()
    {
    }

    QuantumReactor *Core::checkReactor(void) {
        return _coreReactor;
    }


} // namespace WarpSystem