NAME = bureaucrat
G = g++
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 
RM = rm 
FILES = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJ = main.o Bureaucrat.o Form.o ShrubberyCreationForm.o \
	RobotomyRequestForm.o PresidentialPardonForm.o

all: obj $(NAME)

obj:
	$(G) -c $(FILES)
$(NAME):
	$(G) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	$(RM) -fr $(OBJ)
fclean : clean
	$(RM) -fr $(NAME)
	$(RM) -fr *shrubbery
re: fclean all clean
