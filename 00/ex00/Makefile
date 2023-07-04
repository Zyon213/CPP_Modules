NAME = megaphone
FLAG = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
CC = g++
RM = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

re: clean all