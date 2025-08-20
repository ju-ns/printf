NAME = libftprintf.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRC = src 
INC = include

SRCS = $(SRC)/ft_printf.c \
      $(SRC)/fmt_char.c \
	  $(SRC)/fmt_int.c \
	  $(SRC)/fmt_hex.c \
	  $(SRC)/fmt_ptr.c

OBJS = %(SRCS:.c=.o)

AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	$(RM) $(NAME)

re: fclean all

PHONY: all clean fclean re