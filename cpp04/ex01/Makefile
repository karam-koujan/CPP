# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 14:20:47 by kkoujan           #+#    #+#              #
#    Updated: 2025/11/16 14:14:10 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
FLAGS = -Werror -Wextra -Wall -std=c++98
OBJ = main.o Animal.o Cat.o Dog.o WrongCat.o WrongAnimal.o Brain.o
CC = c++

all: $(NAME)
	
$(NAME) : $(OBJ)	
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all