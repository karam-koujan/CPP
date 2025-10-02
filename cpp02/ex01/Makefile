Name = ex00
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = Fixed.o main.o

all : $(Name)

$(Name): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(Name)

%.o : %.cpp Fixed.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(Name)

re: fclean all