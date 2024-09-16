/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:50:45 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/14 16:05:41 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "main.hpp"

# define MAX_COUNT 8

class PhoneBook {
    private:
        Contact         _contacts[8];
        static int      contactIds;
        static int      lastEntry; 
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        
        void        add(void) ;
        void        search(void) ;
        void        exit(void) ;
        
        int         containsSpecialCharacter(const std::string& input) ; 
        std::string truncateString(const std::string str) const ;
        std::string getInput(const std::string &prompt, const std::string &errorMessage);
};

#endif
