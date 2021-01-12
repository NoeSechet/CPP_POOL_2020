
#include <iostream>
#include <stdexcept>
#include "Errors.hpp"
#include "CommunicationDevice.hpp"

CommunicationDevice::CommunicationDevice(std::istream &input,
                                         std::ostream &output)
    try : _api(input, output) {

    } catch (std::exception &errorReceived){
        std::ostringstream error;
        error << "Error: " << errorReceived.what();
        throw CommunicationError(error.str());
}

// • if a standard exception is thrown in CommunicationDevice’s constructor, you should catch it and throw a
// CommunicationError with the error preceded by “Error:” and a space (example: “Error: userName should
// be at least 1 char.”),

CommunicationDevice::~CommunicationDevice()
{
}

bool userLowerCase(std::string name)
{
    for (int i = 0; i < name.length(); i += 1) {
        if (!islower(name[i]))
            return false;
    }
    return true;
}

void
CommunicationDevice::startMission(std::string const &missionName,
                                  std::string *users,
                                  size_t nbUsers)
{
    try {
        for (size_t i = 0; i < nbUsers; ++i)
            _api.addUser(users[i]);
        _api.startMission(missionName);
    } catch (std::exception &errorGot) {
        std::ostringstream errorExcep;
        errorExcep << "Error: " << errorGot.what();
        throw CommunicationError(errorExcep.str());
    } catch (std::runtime_error &errorGot) {
        std::ostringstream errorRunT;
        errorRunT << "RuntimeError: " << errorGot.what();
        throw CommunicationError(errorRunT.str());
    } catch (std::logic_error &errorGot) {
        std::ostringstream errorLogic;
        errorLogic << "“LogicError: " << errorGot.what();
        throw CommunicationError(errorLogic.str());
    }
}

void
CommunicationDevice::send(std::string const &user,
                          std::string const &message) const
{
    try {
        _api.sendMessage(user, message);
    } catch (std::exception& error) {
        std::cout << error.what() << std::endl;
    }
    
}

void
CommunicationDevice::receive(std::string const &user,
                             std::string &message) const
{
    try {
        _api.receiveMessage(user, message);
    } catch (std::exception& error) {
        std::cout << error.what() << std::endl;
    }
        
}
