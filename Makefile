SRC		= ft_printf.c ft_printf_type_c.c ft_printf_type_p.c ft_printf_type_u.c \
ft_printf.h ft_printf_type_d_i.c ft_printf_type_s.c ft_printf_type_x.c libft/libft.a

NAME	= ft_printf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
HEADER	= ft_printf.h

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all