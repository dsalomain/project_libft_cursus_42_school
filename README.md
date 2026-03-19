*This program has been created as part of the 42 curriculum by [radjadag].*

# Description :
`Libft` is the first project of the 42 school common core. The goal is to create a custom C library regrouping a set of standard function from the `libc`, as well as additionnal utility functions. This library serves as a foundation for all future C projects in the curriculum, helping stundents understand memory management, pointer manipulation, an the inner workings of data structures lie linked lists.

# Instructions
### Installation
* **Clone the project into your working directory :**
```bash
   git clone git@github.com:dsalomain/project_libft_cursus_42_school.git libftProject
```
* **Navigate to the folder**
```bash
   cd libftProject
```
### compilation
The project includes a `Makefile` with the following mandatory rules :

* **`make`** or **`make all`** : Compiles the mandatory source files and creates the library `libft.a`.
* **`make clean`** : Removes all object files (.o).
* **`make fclean`** : Removes object files an compiled library (libft.a).
* **`make re`** Performs a full re-compilation of the project.

### Usage
To use this library in your own c project, include the header in your source code :
```c
#include "libft.h"
```
When compiling your project, link the library as follows (assuming `libft.a` and `libft.h` are in the current directory) :
```bash
cc main.c -L. -lft -o my_project
```

### Detailled Description of the Library
the library is categorized into three main parts :
#### 1. Libc Functions
These are re-implementation of standard C function from the `<string.h>`, `<ctype.h>`, and `<stdlib.h>` libraries.

* **Memory manipulation :** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.

* **String manipulation**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`, `ft_strdup`.
* **Character tests**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
* **Conversions**: `ft_atoi`.

#### 2. Additional Functions
These are utility functions that are not part of the standard libc but are essential for future C projects.
* **String utilities**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`.
* **File Descriptor Output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

#### 3. Linked Lists
A set of functions designed to manipulate a singly linked list structure (`t_list`).



* **Functions**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

# Resources
#### classic References
* [Linux Man Pages](https://www.kernel.org/doc/man-pages/): Used to understand the expected behavior and edge cases of the original `libc` functions.
* Various articles and tutorials found on platforms like [gladir](https://www.gladir.com/CODER/index.htm), [youtube](https://www.youtube.com/)

### Use of AI
In accordance with the 42 curriculum guidelines regarding pedagogical integrity, AI was utilized as follows:

* **Concept Clarification**: AI helped in visualizing the difference between `memcpy` and `memmove` regarding memory overlap.
* **Debugging**: Used to interpret complex compiler warnings related to pointer casting in `ft_memchr`, and interpreting complex compiler warnings and edge case identification.
* **Documentation**: Assisted in structuring this README to meet all professional and academic requirements.
* **Code Review**: AI was used to verify the logic of `ft_split`and the all function **ft_lst** is internal word-counting algorithm to ensure efficiency.

> **Note :** Every line of code was manually reviewed, tested, and fully understood before being included in the project. The AI was used as a learning companion to clarify concepts, not to bypass the learning process.
