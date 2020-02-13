# 42 Project : Libft

Libft is the first project when you entered 42: you have to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

## List of functions

Libc & additional functions
1.  **"INT"**
  atoi.c itoa.c
2.  **"CHAR"**
  isalnum.c isalpha.c isascii.c isdigit.c
isprint.c tolower.c toupper.c
3.  **"STR"**
  ft_split.c strchr.c strdup.c strjoin.c
strlcat.c strlcpy.c strlen.c strmapi.c
strncmp.c strnstr.c strrchr.c strtrim.c
substr.c
4.  **"MEM"**
  bzero.c calloc.c memccpy.c memchr.c
memcmp.c memcpy.c memmove.c memset.c
5.  **"PUT"**
  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

Linked list functions (bonus)
6.  **"LST"**
  lstadd_back.c lstadd_front.c lstclear.c lstdelone.c
lstiter.c lstlast.c lstmap.c lstnew.c
lstsize.c

## Usage

```console
  git clone https://github.com/slabelle42/libft.git
  cd libft
  make
```

Linked list functions
``` console
  make bonus
```
