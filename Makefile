CC = cc
CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = printf

SOURCES = $(shell printf "ft_%s.c\n" ${FUNCTIONS})

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
        @ar -rcs $(NAME) $(OBJECTS)

bonus : $(OBJECTS_BONUS)
        @ar -rcs $(NAME) $(OBJECTS_BONUS)

clean :
        @rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean : clean
        @rm -f $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re
