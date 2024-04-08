
NAME = Animal

SRCS = main.cpp \
		dog.cpp \
		cat.cpp \
		animal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all