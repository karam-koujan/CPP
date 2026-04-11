# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/11 20:40:57 by kkoujan           #+#    #+#              #
#    Updated: 2026/04/11 22:38:59 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#  
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME= array
OBJ= main.o 

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp Array.hpp Array.tpp
	$(CC) $(FLAGS) -c $< -o $@

clean : $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all