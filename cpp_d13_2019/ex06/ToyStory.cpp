/*
** EPITECH PROJECT, 2020
** ex06
** File description:
** ToyStory
*/

#include "ToyStory.hpp"

void ToyStory::tellMeAStory(const std::string file, Toy &toy1, bool (Toy::*func1)(std::string), Toy &toy2, bool (Toy::*func2)(std::string))
{
    std::string line;
    std::ifstream fileStr(file);
    std::string filename;
    int toggle = 1;
    Toy *savedObj = nullptr;
    bool (Toy::*savedFunc)(std::string) = nullptr;

    if (!fileStr.is_open()) {
        std::cout << "Bad Story" << std::endl;
        return;
    }
    std::cout << toy1.getAscii() << std::endl;
    std::cout << toy2.getAscii() << std::endl;


    while (getline(fileStr, line)) {
        if (toggle % 2) {
            savedObj = &toy1;
            savedFunc = func1;
        } else {
            savedObj = &toy2;
            savedFunc = func2;
        }
        if (line.find("picture:") != std::string::npos) {
            line = line.substr(8);
            if (savedObj->setAscii(line) == false) {
                std::cout << savedObj->getLastError().where() << ": " << savedObj->getLastError().what() << std::endl;
                return;
            }
            std::cout << savedObj->getAscii() << std::endl;
        }
        else {
            if ((savedObj->*savedFunc)(line) == false) {
                std::cout << savedObj->getLastError().where() << ": " << savedObj->getLastError().what() << std::endl;
                return;
            }
            toggle += 1;
        }
    }
}