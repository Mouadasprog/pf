CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = 	ft_printf.c\
 ft_put_ptr.c\
 ft_putchar.c\
 ft_putnbr_base.c\
 ft_putnbr_hex.c\
 ft_putnbr_i.c\
 ft_putnbr_u.c\
 ft_putnbr_x.c\
 ft_putpercent.c\
 ft_putstr.c\
 ft_putnbr_d.c

OBJS = $(SRCS:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re