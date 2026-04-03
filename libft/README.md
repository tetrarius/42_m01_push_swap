# Libft
*This project has been created as part of the 42 curriculum by aravakia.*

---

## Description 

Libft is a personal C library that reimplements a set of standard libc functions, additional useful functions, and linked list operations.  
It helps understand how standard C functions work under the hood and allows you to use your own library in future assignments.


## Project Goal 

- Reimplement libc functions with the `ft_` prefix.  
- Create useful string, memory, and linked list manipulation functions.  
- Understand memory allocation, pointers, and linked list operations.  


## Instructions 

### Compilation

To compile the library, run:

make

The library is compiled using the provided Makefile and the `cc` compiler with the following flags:
 
 -Wall -Wextra -Werror


This will generate the static library file `libft.a` at the root of the repository.

### Makefile rules

- make / make all  : To compile the library
- make clean  : Remove object files
- make fclean  : Remove object files and the library
- make re : Recompile everything


## Tasks Completed

---
Library Content

1. Part 1 — Standard C Library Reimplementations:

Recreations of commonly used C standard functions such as:

    ft_strlen, ft_strchr, ft_strncmp, ft_strlcpy, ft_strdup
    ft_atoi, ft_isalpha, ft_isdigit, ft_isalnum, ft_toupper
    ft_memset, ft_memcpy, ft_memmove, ft_bzero, ft_calloc

2. Part 2 — Additional Utility Functions

Functions that are not part of the standard C library but are highly useful:

    ft_substr, ft_strjoin, ft_strtrim, ft_split
    ft_itoa, ft_strmapi, ft_striteri, ft_putchar_fd
    ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

3. Part 3— Linked List Functions

Linked list functions:

    ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast
    ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap
---

## Resources 

- How Linux Works. Brain Ward
- Linux manual pages (man 3)
- C Programming Language. Brain Kernighan, Dennis Ritchie
- GNU C Library documentation
- W3Schools.com
- 42 intranet Libft subject
- google search resources
- peer on the right peer on the left and someone smart in the building
- AI tools were used only for search resources
