NAME = animal

SRC = 	srcs/Animal.cpp \
		srcs/Cat.cpp \
		srcs/Dog.cpp \
		srcs/WrongAnimal.cpp \
		srcs/WrongCat.cpp \
		srcs/Brain.cpp \
		srcs/main.cpp

HEADER = include/

OBJS = $(SRC:%.cpp=%.o)

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

./PHONY: all re fclean clean
