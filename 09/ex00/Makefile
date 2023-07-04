NAME = btc
CXX = c++
FLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
FILES = main.cpp BitcoinExchange.cpp

OBJ_DIR = obj
OBJS = $(FILES:%.cpp=$(OBJ_DIR)/%.o)

all : $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJS)
	$(CXX) $(FLAG) $(OBJS) -o $(NAME)

$(OBJ_DIR) :
	mkdir -p obj

$(OBJ_DIR)/%.o : %.cpp
	$(CXX) $(FLAG) -c $< -o $@


clean :
	$(RM) $(OBJ_DIR)
fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean re