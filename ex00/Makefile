# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amirfatt <amirfatt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 12:49:53 by amirfatt          #+#    #+#              #
#    Updated: 2024/09/12 13:05:06 by amirfatt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCE = megaphone.cpp

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
