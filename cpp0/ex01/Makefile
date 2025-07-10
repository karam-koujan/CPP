NAME = phonebook
CC = g++
FLAGS = -Wall -Wextra -Werror --std=c++98
OBJ = main.o

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Contact.hpp PhoneBook.hpp
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all