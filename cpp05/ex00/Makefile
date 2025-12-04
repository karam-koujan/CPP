# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 09:38:43 by kkoujan           #+#    #+#              #
#    Updated: 2025/12/04 10:31:56 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 Name = bureaucrat
 CPP = c++ -Wall -Wextra -Werror -std=c++98
 OBJ = Bureaucrat.o main.o 


all: $(Name)

$(Name) : $(OBJ)
	$(CPP) $(OBJ) -o $(Name)

%.o:%.cpp Bureaucrat.hpp
	$(CPP) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(Name)

re : fclean all