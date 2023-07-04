NAME = main
FILES = main.cpp editor.cpp
G = g++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98
def:
	$(G) $(FILES) -o $(NAME)
all:
	  $(G) $(FLAGS) $(FILES) -o $(NAME)
clean:
	$(RM) $(NAME)
	$(RM) *.replace
re: clean all