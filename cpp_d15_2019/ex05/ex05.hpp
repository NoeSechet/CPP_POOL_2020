/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex05
*/

#ifndef EX05_HPP_
#define EX05_HPP_

#include <iostream>

template<typename T>
class array
{
private:
    T *m_array;
    unsigned int m_size = 0;
    
public:
    array() : m_array(0), m_size(0) {}

    array(unsigned int n)
    {
        this->m_array = new T[n];
        m_size = n;
        for (unsigned int i = 0; i < m_size; ++i) {
            this->m_array[i] = 0;
        }
    }

    array(const array &toCopy)
    {
        this->m_array = new T[toCopy.m_size];
        this->m_size = toCopy.m_size;
        for (unsigned int i = 0; i < m_size; ++i) {
            this->m_array[i] = toCopy.m_array[i];
        }
    }

    ~array() {
        if (this->m_array)
            delete [] m_array;
    }

    array &operator=(const array &toCopy) {
        if (this != &toCopy) {
            if (this->m_array) {
                delete [] this->m_array;
            }
            this->m_array = new T[toCopy.m_size];
            this->m_size = toCopy.m_size;
            for (unsigned int i = 0; i < m_size; i += 1) {
                this->m_array[i] = toCopy.m_array[i];
            }
        }
        return *this;
    }

    T* getArray() const { return this->m_array; }

    T &operator[](const unsigned int spot)
    {
        T *temp = nullptr;
        unsigned int i = 0;
        unsigned int j = 0;

        if (spot >= this->m_size)
        {
            temp = new T[spot + 1];
            for (; i < this->m_size; i += 1) {
                temp[i] = this->m_array[i];
            }
            delete [] this->m_array;
            this->m_array = temp;
            this->m_size = spot + 1;
            for (j = i; j < this->m_size - 1; j += 1) {
                this->m_array[j] = 0;
            }
        }
        return this->m_array[spot];
    }

    T &operator[](const unsigned int spot) const
    {
        if (spot >= this->m_size) {
            throw std::exception();
        }
        return this->m_array[spot];
    }

    int size() const { return this->m_size; }

    void dump() const
    {
        std::cout << "[";
        for (unsigned int i = 0; i < this->m_size; i += 1) {
            std::cout << std::boolalpha << this->m_array[i];
            if (i < this->m_size - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    template<typename U>
    array<U>convertTo(U (*func)(const T &))
    {
        array<U> newClass(this->m_size);

        for (unsigned int i = 0; i < this->m_size; i += 1) {
            newClass[i] = func(this->m_array[i]);
        }
        return newClass;
    }
};

#endif /* !EX05_HPP_ */