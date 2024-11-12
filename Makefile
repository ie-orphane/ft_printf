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

run : $(LIBRARY)
	@$(CC) $(CFLAGS) main.c -L. -l$(NAME) -o $(NAME) && ./$(NAME)
	@rm -f $(NAME)

.PHONY : all clean fclean re run
