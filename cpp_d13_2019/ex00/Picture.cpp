/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Picture
*/

#include "Picture.hpp"

Picture::Picture()
{
    this->data = "";
}

Picture::~Picture()
{
}

Picture::Picture(const std::string &file)
{
    getPictureFromFile(file);
}

bool Picture::getPictureFromFile (const std::string &file)
{
    std::ifstream openedFile(file);
    std::string line;

    if (!openedFile.is_open()) {
        this->data = "ERROR";
        return false;
    }
    while (getline(openedFile, line)) {
        data.append(line);
        data.append("\n");
    }
    openedFile.close();

    return true;
}