# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/18 13:02:22 by kkoujan           #+#    #+#              #
#    Updated: 2025/09/18 13:02:28 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz
FLAGS = -Werror -Wextra -Wall -std=c++98
OBJ = main.o
CC = c++

all: $(NAME)
	
$(NAME) : $(OBJ)	
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all