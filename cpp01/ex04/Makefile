NAME = sed
FLAGS = -Werror -Wextra -Wall -std=c++98
OBJ = main.o
CC = c++

all: $(NAME)
	
$(NAME) : $(OBJ)	
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all