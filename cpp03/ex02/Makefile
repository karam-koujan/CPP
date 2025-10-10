NAME = ex02
FLAGS = -Werror -Wextra -Wall -std=c++98
OBJ = main.o ClapTrap.o FragTrap.o
CC = c++

all: $(NAME)
	
$(NAME) : $(OBJ)	
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp FragTrap.hpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all