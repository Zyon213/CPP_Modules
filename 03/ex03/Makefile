NAME = claptrap
G = g++
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 
RM = rm 
FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ = main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o

all: obj $(NAME) clean

obj:
	$(G) -c $(FILES)
$(NAME):
	$(G) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	$(RM) -fr $(OBJ)
fclean : clean
	$(RM) -fr $(NAME) 
re: fclean all
