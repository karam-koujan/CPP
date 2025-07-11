NAME = account
CC = g++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = Account.o tests.o

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Account.hpp
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all