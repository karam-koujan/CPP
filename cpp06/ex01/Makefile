# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/10 21:34:47 by kkoujan           #+#    #+#              #
#    Updated: 2026/04/06 20:01:32 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializer
CC = c++ -Wall -Wextra -Werror
OBJ = main.o Serializer.o 

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp Serializer.hpp Data.hpp
	$(CC) -c $< -o $@

clean: $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all	
