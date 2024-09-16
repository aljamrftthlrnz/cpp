/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:06:41 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/14 16:02:53 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int PhoneBook::contactIds = 0; 
int PhoneBook::lastEntry = 0;

PhoneBook::PhoneBook () { }

PhoneBook::~PhoneBook () { return ; }

std::string PhoneBook::truncateString(const std::string str) const {
    if(str.length () > 10)
        return str.substr(0, 9) + "."; 
    return str; 
}

int PhoneBook::containsSpecialCharacter(const std::string& input) {
    const std::string specialChars = "ÖÄÜöäü";
    std::size_t found = input.find_first_of(specialChars);
    return (found != std::string::npos) ? 1 : 0;
}

std::string PhoneBook::getInput(const std::string &prompt, const std::string &errorMessage)
{
    std::string input;
    while(true)
    {
        std::cout << prompt << std::endl;
        std::getline(std::cin, input);
        if(input.empty() || containsSpecialCharacter(input)) {
            std::cout << errorMessage << std::endl;
        }
        else if(prompt == PHONENUMBER)
        {
            if(input.find_first_not_of("0123456789") != std::string::npos)
                std::cout << errorMessage << std::endl;
            else 
                return input; 
        }
        else
            return input;
    }
}

void PhoneBook::search(void) {
    
    int index;
    if (lastEntry == 0) {
        std::cout << EMPTY << std::endl; 
        return ;
    }
    std::cout << std::setw(10) << Index << sep << std::setw(10) << firstName << sep << std::setw(10) << lastName << sep << std::setw(10) << nickname << sep << std::endl;
    for (int i = 0; i < lastEntry; ++i) {
        std::cout   << std::setw(10) << i + 1 << sep 
                    << std::setw(10) << truncateString(_contacts[i].getFirstName()) << sep 
                    << std::setw(10) << truncateString(_contacts[i].getLastName()) << sep
                    << std::setw(10) << truncateString(_contacts[i].getNickname()) << sep 
                    << std::endl;
    }
    std::cout << validIndex << std::endl; 
    std::cout << "-> "; 
    std::cin >> index;
    std::cin.ignore(); 
    if(index < 1 || index > lastEntry)
    {
        std::cout << invalidIndex << std::endl;  
        return ; 
    }
    else
    {
        Contact contact = _contacts[index - 1];
        std::cout   << firstName << tab << contact.getFirstName() << std::endl
                    << lastName  << tab << contact.getLastName() << std::endl
                    << nickname << tab << contact.getNickname() << std::endl
                    << phonenumber << tab << contact.getPhoneNumber () << std::endl
                    << darkestSecret << tab << contact.getDarkestSecret () << std::endl; 
    }
}

void PhoneBook::add(void) { 

    Contact newContact;

    newContact.setFirstName(getInput(FIRST_NAME, INVALID));
    newContact.setLastName(getInput(LAST_NAME, INVALID));
    newContact.setNickname(getInput(NICKNAME, INVALID));
    newContact.setPhoneNumer(getInput(PHONENUMBER, INVALID)); 
    newContact.setDarkestSecret(getInput(DARKEST_SECRET, INVALID));
    newContact.setIndex(contactIds);
    
    _contacts[contactIds % MAX_COUNT] = newContact;
    contactIds++;
    if(lastEntry < MAX_COUNT)
        lastEntry++;
    std::cout << CONTACT_ADDED << std::endl;
}

void PhoneBook::exit(void)
{
    std::cout << exiting << std::endl;
    return ; 
}

