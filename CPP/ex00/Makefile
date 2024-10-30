NAME = animal

SRC = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp  WrongCat.cpp  main.cpp

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean: 
	rm -f $(OBJ)

fclean:
	rm -f rm -f $(NAME)

re: fclean all

./PHONY: all re fclean clean
