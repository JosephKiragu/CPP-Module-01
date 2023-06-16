# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Source files
SRC = Zombie.cpp ZombieHorde.cpp main.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Name of the executable
EXEC = zombie

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $(EXEC) $(OBJ) $(CFLAGS)

# Automatic dependency rules
%.o: %.cpp Zombie.h
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
