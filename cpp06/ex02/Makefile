# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/10 21:34:47 by kkoujan           #+#    #+#              #
#    Updated: 2026/04/06 22:28:38 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = real
CC = c++ -Wall -Wextra -Werror
OBJ = main.o A.o B.o C.o Base.o 

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp A.hpp B.hpp C.hpp Base.hpp
	$(CC) -c $< -o $@

clean: $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all	
