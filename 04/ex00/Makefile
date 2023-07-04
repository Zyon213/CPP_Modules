NAME = animal
G = g++
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 
RM = rm 
FILES = main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = main.o Cat.o Dog.o Animal.o WrongAnimal.o WrongCat.o

all: obj $(NAME)

obj:
	$(G) -c $(FILES)
$(NAME):
	$(G) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	$(RM) -fr $(OBJ)
fclean : clean
	$(RM) -fr $(NAME) 
re: fclean all clean
