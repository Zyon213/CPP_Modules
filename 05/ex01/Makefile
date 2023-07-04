NAME = bureaucrat
G = g++
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 
RM = rm 
FILES = main.cpp Bureaucrat.cpp Form.cpp
OBJ = main.o Bureaucrat.o Form.o

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
