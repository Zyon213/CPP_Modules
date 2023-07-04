NAME = cast
G = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm 
FILES = main.cpp CastType.cpp CheckType.cpp
OBJ = main.o CastType.o CheckType.o

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
