NAME = libft.a
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
				ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)
HEADER = includes
GCC = gcc -Wall -Wextra -Werror
AR = ar rc
RM = rm -rf

.c.o :
	$(GCC) -c $< -o $(<:.c=.o) -I $(HEADER)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)

re : fclean all

test :
	@./${NAME} 42 | cat -e || true ; "" ;

.PHONEY : all clean fclean re test
