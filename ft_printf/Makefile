NAME    = libftprintf.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
RM      = rm -f

SRCS    = ft_printf_p.c ft_printf_s.c\
          ft_printf.c\
          ft_putnbr.c ft_putnbr_u.c ft_putnbr_16.c\
          ft_putchar.c ft_putstr.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
