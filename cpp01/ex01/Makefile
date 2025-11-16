NAME = brainz
FLAGS = -Werror -Wextra -Wall -std=c++98
OBJ = main.o Zombie.o zombieHord.o
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