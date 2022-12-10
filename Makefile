NAME = libftprintf.a

SOURCES =

OBJECTS =

CC = cc
CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re