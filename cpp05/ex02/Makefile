# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 09:38:43 by kkoujan           #+#    #+#              #
#    Updated: 2025/12/16 16:13:02 by kkoujan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 Name = bureaucrat
 CPP = c++ -Wall -Wextra -Werror -std=c++98
 OBJ = Bureaucrat.o main.o AForm.o ShrubberyCreationForm.o PresidentialPardonForm.o


all: $(Name)

$(Name) : $(OBJ)
	$(CPP) $(OBJ) -o $(Name)

%.o:%.cpp Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp
	$(CPP) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(Name)

re : fclean all