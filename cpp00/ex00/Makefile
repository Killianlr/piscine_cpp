
NAME = megaphone

SRCS = megaphone.cpp \

OBJS = $(SRCS:.c=.o)

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean: 
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all