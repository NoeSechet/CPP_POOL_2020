/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** main
*/

#include <iostream>
#include <iomanip>

int write_temp(float temperature, std::string scale) {

    std::cout.width(16);
    std::cout << std::right << std::fixed << std::setprecision(3)
        << temperature;
    std::cout.width(16);
    std::cout << scale << std::endl;

    return 0;
}

int main(int ac, char const *av[])
{
    float temperature;
    std::string scale;

    std::cin >> temperature >> scale;

    if (scale.compare("Fahrenheit") == 0 || scale.compare("fahrenheit") == 0) {
        temperature = (temperature - 32.0) * (5.0/9.0);
        write_temp(temperature, "Celsius");
    }

    if (scale.compare("Celsius") == 0 || scale.compare("celsius") == 0) {
        temperature = temperature / (5.0/9.0) + 32.0;
        write_temp(temperature, "Fahrenheit");
    }
    return 0;
}