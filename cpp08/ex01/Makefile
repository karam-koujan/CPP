# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/30 11:45:57 by kkoujan           #+#    #+#              #
#    Updated: 2026/04/30 11:45:59 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME= easyfind
OBJ= main.o 

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp easyfind.hpp easyfind.tpp
	$(CC) $(FLAGS) -c $< -o $@

clean : $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all