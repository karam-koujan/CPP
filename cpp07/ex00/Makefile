# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/10 16:52:52 by kkoujan           #+#    #+#              #
#    Updated: 2026/04/10 17:21:28 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME= intro
OBJ= main.o 

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.c whatever.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean : $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all