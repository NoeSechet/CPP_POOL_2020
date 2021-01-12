/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** Picture
*/

#include "Picture.hpp"

Picture::Picture(const std::string &file)
{
    if (file == "") {
        this->data = "";
    } else {
        getPictureFromFile(file);
    }
}

Picture::Picture(const Picture &picToCopy)
{
    this->data = picToCopy.data;
}

Picture::~Picture()
{
}

bool Picture::getPictureFromFile (const std::string &file)
{
    std::ostringstream oss;
    std::ifstream openedFile(file);

    if (!openedFile.is_open()) {
        this->data = "ERROR";
        return false;
    }
    oss << openedFile.rdbuf();
    this->data = oss.str();
    openedFile.close();

    return true;
}

Picture &Picture::operator=(const Picture &toCopy)
{
    this->data = toCopy.data;
    return *this;
}