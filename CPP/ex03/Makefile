NAME = interface

SRC = 	srcs/AMateria.cpp \
		srcs/ICharacter.cpp \
		srcs/MateriaSource.cpp \
		srcs/main.cpp 

HEADER = include/

OBJS = $(SRC:%.cpp=%.o)

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

./PHONY: all re fclean clean
