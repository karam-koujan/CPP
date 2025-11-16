NAME = megaphone
CC = g++
FLAGS = -Wall -Wextra -Werror
OBJ = megaphone.o

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all