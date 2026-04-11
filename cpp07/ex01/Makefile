# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/11 19:16:57 by kkoujan           #+#    #+#              #
#    Updated: 2026/04/11 19:29:57 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME= iter
OBJ= main.o 

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp iter.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean : $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all