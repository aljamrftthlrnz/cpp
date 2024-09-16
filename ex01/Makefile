# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 13:06:18 by amirfatt          #+#    #+#              #
#    Updated: 2024/09/12 21:01:28 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = main.cpp PhoneBook.cpp Contact.cpp

OBJECT = $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECT)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECT) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
