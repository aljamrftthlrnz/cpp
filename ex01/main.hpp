/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:55:13 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/14 15:15:19 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include "PhoneBook.hpp"
# include "Contact.hpp" 

/* General Messages */
# define PROMPT         " ** Enter your prompt - Either choose ADD, SEARCH or EXIT ** "          
# define CONTACT_ADDED  " ************** Contact added to Phonebook ***************** "
# define validIndex     " ******* Enter index to display specific contact *********** "
# define exiting        " ****************** Exiting Phonebook ********************** "

/* Error Messages */
# define INVALID        " ******************** Invalid Input ************************ "
# define EMPTY          " ******************* Empty Phonebook *********************** "
# define invalidIndex   " ************** Please enter a valid Index ***************** "

/* Phonebook Messages */
# define FIRST_NAME     " * Enter First Name * "
# define LAST_NAME      " * Enter Last Name * " 
# define NICKNAME       " * Enter Nickname * "
# define PHONENUMBER    " * Enter Phonenumber * "
# define DARKEST_SECRET " * Enter Darkest Secret * "

/* Table Messages */
# define Index          "Index"
# define firstName      "First Name"
# define lastName       "Last Name"
# define nickname       "Nickname"
# define phonenumber    "Phone Number"
# define darkestSecret  "Darkest Secret"

/* Formatting */
# define sep            " | "
# define tab            ": "

# endif 

