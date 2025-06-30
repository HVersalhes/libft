NAME	= libft.a
SRCS	= $(wildcard ft_*.c)
OBJDIR	= objs
OBJS	= $(addprefix $(OBJDIR)/,$(SRCS:.c=.o))
HEADER	= libft.h

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS) $(HEADER) 
	$(AR) $(NAME) $(OBJS)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c $(HEADER) | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rmdir $(OBJDIR) 2>/dev/null || true

fclean: clean
	rm -f $(NAME)

re: fclean all
