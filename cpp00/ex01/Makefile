
NAME = repertoire

SRCS = Contact.cpp \
		PhoneBook.cpp \
		main.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean: 

fclean: clean

re: fclean all