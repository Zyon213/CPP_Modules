NAME = claptrap
G = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm 
FILES = main.cpp ClapTrap.cpp
OBJ = main.o ClapTrap.o

all: obj $(NAME)

obj:
	$(G) -c $(FILES)
$(NAME):
	$(G) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) -fr $(NAME) 
	$(RM) -fr $(OBJ)
re: clean all
