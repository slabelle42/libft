NAME = libft.a

FLAG = -Wall -Wextra -Werror

# is _______________
SRC =	ft_isalnum.c
SRC +=	ft_isalpha.c
SRC +=	ft_isascii.c
SRC +=	ft_isdigit.c
SRC +=	ft_isprint.c
# str ______________
SRC +=	ft_strdup.c
SRC +=	ft_strjoin.c
SRC +=	ft_strlcat.c
SRC +=	ft_strlcpy.c
SRC +=	ft_strlen.c
SRC +=	ft_strmapi.c
SRC +=	ft_strncmp.c
SRC +=	ft_strnstr.c
SRC +=	ft_strrchr.c
SRC +=	ft_strtrim.c
SRC +=	ft_substr.c
# mem ______________
SRC +=	ft_bzero.c
SRC +=	ft_calloc.c
SRC +=	ft_memccpy.c
SRC +=	ft_memchr.c
SRC +=	ft_memcmp.c
SRC +=	ft_memcpy.c
SRC +=	ft_memmove.c
SRC +=	ft_memset.c
# convert __________
SRC +=	ft_atoi.c
SRC +=	ft_itoa.c	
SRC +=	ft_split.c
SRC +=	ft_tolower.c
SRC +=	ft_toupper.c
# write _______________
SRC +=	ft_putchar_fd.c
SRC +=	ft_putendl_fd.c
SRC +=	ft_putnbr_fd.c
SRC +=	ft_putstr_fd.c
# lst _______________________
ifeq ($(MAKECMDGOALS), bonus)
SRC +=	ft_lstadd_back.c
SRC +=	ft_lstadd_front.c
SRC +=	ft_lstclear.c
SRC +=	ft_lstdelone.c
SRC +=	ft_lstiter.c
SRC +=	ft_lstlast.c
SRC +=	ft_lstmap.c
SRC +=	ft_lstnew.c
SRC +=	ft_lstsize.c
endif

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $@

$(OBJ): $(SRC)
	@gcc $(FLAG) -c $?

bonus: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
