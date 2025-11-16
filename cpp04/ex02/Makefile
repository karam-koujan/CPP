# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 14:20:47 by kkoujan           #+#    #+#              #
#    Updated: 2025/11/16 15:05:36 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
FLAGS = -Werror -Wextra -Wall -std=c++98
OBJ = main.o Animal.o Cat.o Dog.o Brain.o
CC = c++

all: $(NAME)
	
$(NAME) : $(OBJ)	
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all