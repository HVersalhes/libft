NAME	= libft.a
SRCS	= $(wildcard ft_*.c)
OBJS	= $(SRCS:.c=.o)
HEADER	= libft.h

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS) $(HEADER) 
	$(AR) $(NAME) $(OBJS)
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
