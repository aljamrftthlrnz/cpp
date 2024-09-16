/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:59:21 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/14 15:27:43 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

int main()
{
    PhoneBook phonebook;
    std::string input;
    std::cout << PROMPT << std::endl;
    while(true && std::cin)
    {
        std::getline(std::cin, input);
        if(input == "ADD")
        {
            phonebook.add(); 
        }
        else if (input == "SEARCH")
        {
            phonebook.search();
        }
        else if (input == "EXIT")
        {
            phonebook.exit();
            break ;
        }
        else 
        {
            std::cout << input << std::endl; 
            std::cout << INVALID << std::endl;
        } 
        std::cout << PROMPT << std::endl;        
    }
    return (0);       
}

