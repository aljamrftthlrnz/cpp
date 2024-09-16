/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:50:41 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/14 14:32:58 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef    CONTACT_HPP
# define    CONTACT_HPP

# include "main.hpp"

class Contact {
    private: 
            int         _index; 
            std::string _firstName;
            std::string _lastName; 
            std::string _nickname;
            std::string _phoneNumber;
            std::string _darkestSecret; 
    public:
            Contact(void);
            ~Contact(void);
            
            /* GETTER */
            std::string getFirstName(void) const ;
            int getIndex(void) const; 
            std::string getLastName(void) const;
            std::string getNickname(void) const;
            std::string getPhoneNumber(void) const;
            std::string getDarkestSecret(void) const; 
        
            /* SETTER */
            void        setFirstName(const std::string name);
            void        setIndex(int index); 
            void        setLastName(const std::string name);
            void        setNickname(const std::string name);
            void        setPhoneNumer(const std::string number);
            void        setDarkestSecret(const std::string secret); 
}; 

#endif