NAME = type
G = g++
FLAGS = -Wall -Wextra -Werror  -std=c++98 
RM = rm 
FILES = main.cpp A.cpp B.cpp C.cpp Base.cpp
OBJ = main.o A.o B.o C.o Base.o

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
