NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putUnbr.c ft_hexanbr.c ft_address.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c libftprintf.h
		$(CC) $(CFLAGS) -c $<

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all