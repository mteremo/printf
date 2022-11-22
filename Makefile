NAME = 	libftprintf.a

SRC = ft_pointer.c ft_printf.c ft_printhex_lc.c ft_putnbr_base_uc.c \
	ft_putchar.c ft_putnbr.c ft_putstr.c

SRCLIBFT = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		 ft_isprint.c ft_memchr.c ft_memcmp.c ft_striteri.c\
		 ft_memcpy.c ft_memmove.c ft_memset.c ft_putendl_fd.c\
		 ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c\
		 ft_strchr.c ft_strlcpy.c ft_strmapi.c\
		 ft_strdup.c ft_split.c ft_calloc.c ft_itoa.c\
		 ft_strlen.c ft_strncmp.c ft_substr.c ft_strtrim.c\
		 ft_strnstr.c ft_strrchr.c ft_strjoin.c\
		 ft_tolower.c ft_toupper.c ft_strlcat.c

SRCLIB = $(addprefix libft/, $(SRCLIBFT))

OBJ = $(SRC:.c=.o)

OBJLIBFT = $(SRCLIBFT:.c=.o)

LIBFT = libft/libft.a

LIB = ft_printf.h

LIBC = ar rcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

$(NAME) : libft.a $(OBJ)
		cp $(LIBFT) .
		mv libft.a $(NAME)
		$(CC) $(CFLAGS) -c $(SRC)
		$(LIBC) $(NAME) $(OBJ)

all : $(NAME)

libft.a : 
		cd libft && $(MAKE) all

clean :
		$(RM) $(OBJ) $(OBJLIBFT)

libft_fclean : 
		cd libft && $(MAKE) fclean

fclean : clean libft_fclean
		$(RM) $(NAME)

re : fclean all

.PHONY : all, clean, fclean, re, libft.a, libft_fclean