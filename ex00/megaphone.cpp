/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:47:44 by amirfatt          #+#    #+#             */
/*   Updated: 2024/09/16 13:13:39 by amirfatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j] != '\0'; j++)
            {   
                if((char)std::isalpha(argv[i][j]) == 0) 
                    std::cout<<(char)std::toupper (argv[i][j]);
                else 
                    std::cout<<argv[i][j];
            }
        }
        std::cout<<std::endl;
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    return (0);
}
