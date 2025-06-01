CC				= cc
CFLAGS			= -Wall -Wextra -Werror
NAME			= libftprintf.a
SOURCES			= ft_printf.c ft_printf_type_c.c ft_printf_type_p.c ft_printf_type_u.c \
				  ft_printf_type_d_i.c ft_printf_type_s.c ft_printf_type_x.c
HEADER			= ft_printf.h
INCLUDES		= -I.
OBJECTS			= $(SOURCES:.c=.o)

LIBFT_DIR		= ./libft
LIBFT			= libft.a
LIBFT_PATH		= $(LIBFT_DIR)/$(LIBFT)
LIBFT_FLAGS		= -L$(LIBFT_DIR) -lft

all: $(NAME)

$(NAME): $(LIBFT_PATH) $(OBJECTS)
	cp $(LIBFT_PATH) ./
	mv $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDES) -I$(LIBFT_DIR) -c $< -o $@

$(LIBFT_PATH):
	make -C $(LIBFT_DIR)

clean:
	rm -f $(OBJECTS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

debug: fclean
	$(CC) $(CFLAGS) -g -o debug *.c */*.c

.PHONY: all clean fclean re debug
