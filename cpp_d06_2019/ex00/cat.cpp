/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** cat
*/

#include <iostream>
#include <fstream>

int main(int ac, char const *av[])
{
    if (ac == 1) {
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
        return 0;
    }

    for (int i = 1; i < ac; i += 1) {
        std::ifstream file(av[i]);
        if (!file.is_open())
            std::cerr << "my_cat: " << av[i] << ": No such file or directory" << std::endl;
        std::cout << file.rdbuf();
        file.close();
    }
    return 0;
}