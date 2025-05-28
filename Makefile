SRC		= ft_printf.c ft_printf_type_c.c ft_printf_type_p.c ft_printf_type_u.c \
ft_printf_type_d_i.c ft_printf_type_s.c ft_printf_type_x.c

NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
HEADER	= ft_printf.h
OBJ		= $(SRC:.c=.o)

LIBFT_DIR	= libft
LIBFT_A		= $(LIBFT_DIR)/libft.a

all: $(LIBFT_A) $(NAME)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
			rm -rf $(OBJ)
			$(MAKE) clean -C $(LIBFT_DIR)

fclean:		clean
			rm -rf $(NAME)
			$(MAKE) fclean -C $(LIBFT_DIR)

re:			fclean all