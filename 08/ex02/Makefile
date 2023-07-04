NAME = stack
G = g++
FLAGS = -Wall -Wextra -Werror  -std=c++98 
RM = rm 
FILES = main.cpp 
OBJ = main.o 

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
