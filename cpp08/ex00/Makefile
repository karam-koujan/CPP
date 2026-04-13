# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/13 14:45:40 by kkoujan           #+#    #+#              #
#    Updated: 2026/04/13 14:46:43 by kkoujan          ###   ########.fr        #
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