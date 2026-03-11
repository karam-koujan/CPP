# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/10 21:34:47 by kkoujan           #+#    #+#              #
#    Updated: 2026/03/11 23:33:53 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = c++ -Wall -Wextra -Werror
OBJ = main.o ScalarConverter.o 

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp ScalarConverter.hpp
	$(CC) -c $< -o $@

clean: $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all	
