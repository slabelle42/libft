NAME = libft.a

FLAG = -Wall -Wextra -Werror

HDR = libft.h libft_bonus.h
HDR_BONUS

EXE = libft
MAIN = main_libft.c

############### [ SRC ] ###############
# ( int )
SRC =	ft_atoi.c
SRC +=	ft_itoa.c
# ( char )
SRC +=	ft_isalnum.c
SRC +=	ft_isalpha.c
SRC +=	ft_isascii.c
SRC +=	ft_isdigit.c
SRC +=	ft_isprint.c
SRC +=	ft_tolower.c
SRC +=	ft_toupper.c
# ( str )
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
# ( mem )
SRC +=	ft_bzero.c
SRC +=	ft_calloc.c
SRC +=	ft_memccpy.c
SRC +=	ft_memchr.c
SRC +=	ft_memcmp.c
SRC +=	ft_memcpy.c
SRC +=	ft_memmove.c
SRC +=	ft_memset.c
# ( put )
SRC +=	ft_putchar_fd.c
SRC +=	ft_putendl_fd.c
SRC +=	ft_putnbr_fd.c
SRC +=	ft_putstr_fd.c
# ( lst )
SRC_BONUS =		ft_lstadd_back_bonus.c
SRC_BONUS +=	ft_lstadd_front_bonus.c
SRC_BONUS +=	ft_lstclear_bonus.c
SRC_BONUS +=	ft_lstdelone_bonus.c
SRC_BONUS +=	ft_lstiter_bonus.c
SRC_BONUS +=	ft_lstlast_bonus.c
SRC_BONUS +=	ft_lstmap_bonus.c
SRC_BONUS +=	ft_lstnew_bonus.c
SRC_BONUS +=	ft_lstsize_bonus.c

############### [ OBJ ] ###############
# ( obj )
OBJDIR = obj/
OBJNAME = $(SRC:.c=.o)
OBJ = $(addprefix $(OBJDIR), $(OBJNAME))
# ( obj_bonus )
OBJNAME_BONUS = $(SRC_BONUS:.c=.o)
OBJ_BONUS = $(addprefix $(OBJDIR), $(OBJNAME_BONUS))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $?
	@ranlib $@
	@echo "Indexing ... OK"

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $@
	@echo "Creating OBJ directory ... OK"

$(OBJ_DIR)%.o: %.c $(HDR)
	@gcc $(FLAG) -c $< -o $@ -I $(HDR)
	@echo "Compiling" [$?]  "... OK"

bonus: $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Cleaning ... OK"

fclean: clean
	@rm -f $(NAME)
	@rm -f $(EXE)

exe: $(NAME)
	@gcc -o $(EXE) $(MAIN) -L. -lft
	@echo "Creating executable ... OK"

re: fclean all

.PHONY: all bonus clean fclean exe re
