NAME = libft.a

FLAG = -Wall -Wextra -Werror

# int ___________
SRC =	ft_atoi.c
SRC +=	ft_itoa.c	
# char _____________
SRC +=	ft_isalnum.c
SRC +=	ft_isalpha.c
SRC +=	ft_isascii.c
SRC +=	ft_isdigit.c
SRC +=	ft_isprint.c
SRC +=	ft_tolower.c
SRC +=	ft_toupper.c
# str ______________
SRC +=	ft_split.c
SRC +=	ft_strchr.c
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
# put _________________
SRC +=	ft_putchar_fd.c
SRC +=	ft_putendl_fd.c
SRC +=	ft_putnbr_fd.c
SRC +=	ft_putstr_fd.c
# lst ___________________
ifeq ($(MAKECMDGOALS), bonus)
SRC +=	ft_lstadd_back_bonus.c
SRC +=	ft_lstadd_front_bonus.c
SRC +=	ft_lstclear_bonus.c
SRC +=	ft_lstdelone_bonus.c
SRC +=	ft_lstiter_bonus.c
SRC +=	ft_lstlast_bonus.c
SRC +=	ft_lstmap_bonus.c
SRC +=	ft_lstnew_bonus.c
SRC +=	ft_lstsize_bonus.c
endif

OBJ_DIR = obj/
OBJ_NAME = $(SRC:.c=.o)

OBJ = $(addprefix $(OBJ_DIR), $(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $?
	@ranlib $@
	@echo "Indexing ... OK"

$(OBJ_DIR)%.o: %.c
	@gcc $(FLAG) -c $? -o $@
	@echo "Compiling" [$?]  "... OK"

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $@
	@echo "Creating OBJ directory ... OK"

bonus: $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Cleaning ... OK"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
