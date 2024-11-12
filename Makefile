NAME=ftprintf
LIBRARY=$(shell printf "lib%s.a\n" ${NAME})

CC = cc
CFLAGS = -Wall -Wextra -Werror

FILES = printf put

SOURCES = $(shell printf "ft_%s.c\n" ${FILES})

OBJECTS = $(SOURCES:.c=.o)

all : $(LIBRARY)

$(LIBRARY) : $(OBJECTS)
	@ar -rcs $(LIBRARY) $(OBJECTS)

clean :
	@rm -f $(OBJECTS)

fclean : clean
	@rm -f $(LIBRARY)

re : fclean all

run : all $(NAME)
	@./$(NAME)

$(NAME) : main.c
	@$(CC) $(CFLAGS) main.c -L. -lftprintf -o $(NAME)

.PHONY : all clean fclean re run
