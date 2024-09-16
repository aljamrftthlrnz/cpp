# include "main.hpp"

/* Returning the string saved in Contact Class */

Contact::Contact ()  : _firstName(""), _lastName(""), _nickname(""),
      _phoneNumber(""), _darkestSecret("") { 
        this->_index = 0; 
}

Contact::~Contact () {
    return ; 
}

std::string Contact::getFirstName(void) const { 
    return(_firstName); 
}

std::string Contact::getLastName(void) const {
    return(_lastName); 
}

std::string Contact::getNickname(void) const {
    return(_nickname);
}

std::string Contact::getPhoneNumber(void) const {
    return(_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
    return (_darkestSecret); 
}

int Contact::getIndex(void) const {
    return (_index); 
}

/* Setting a value with the private attribute */

void Contact::setFirstName(const std::string name) {
    this->_firstName = name; 
}

void Contact::setLastName(const std::string name) {
    this->_lastName = name; 
}

void Contact::setIndex(int index) {
    _index = index; 
}

void Contact::setNickname(const std::string name) {
    this->_nickname = name; 
}

void Contact::setPhoneNumer(const std::string number) {
    this->_phoneNumber = number;
}

void Contact::setDarkestSecret(const std::string secret) {
    this->_darkestSecret = secret;
}


