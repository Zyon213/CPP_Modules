NAME = claptrap
G = g++
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 
RM = rm 
FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = main.o ClapTrap.o ScavTrap.o FragTrap.o

all: obj $(NAME)

obj:
	$(G) -c $(FILES)
$(NAME):
	$(G) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) -fr $(NAME) 
	$(RM) -fr $(OBJ)
re: clean all
