
NAME = libft.a

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

CC = gcc

FLAGS = -Wall -Werror -Wextra -g3

REMOVE 	= rm -f

SRCS = 	ft_isalpha.c 			\
		ft_isdigit.c 			\
		ft_isalnum.c 			\
		ft_isascii.c 			\
		ft_isprint.c 			\
		ft_strlen.c 			\
		ft_memset.c 			\
		ft_bzero.c 				\
		ft_memcpy.c 			\
		ft_memmove.c 			\
		ft_strlcpy.c 			\
		ft_strlcat.c 			\
		ft_memchr.c 			\
		ft_toupper.c 			\
		ft_tolower.c 			\
		ft_strchr.c 			\
		ft_strrchr.c 			\
		ft_strncmp.c			\
		ft_memcmp.c				\
		ft_strnstr.c			\
		ft_atoi.c 				\
		ft_strdup.c 			\
		ft_calloc.c 			\
		ft_itoa.c 				\
		ft_substr.c	 			\
		ft_split.c 				\
		ft_strjoin.c 			\
		ft_strtrim.c			\
		ft_strmapi.c 			\
		ft_striteri.c 			\
		ft_putchar_fd.c 		\
		ft_putstr_fd.c 			\
		ft_putendl_fd.c 		\
		ft_putnbr_fd.c			\

OBJS = $(SRCS:.c=.o)

all:	${NAME}

${NAME}:	${OBJS}
		@echo "\n$(NAME): $(GREEN)$(NAME) was created$(RESET)"
		ar -rcs ${NAME} ${OBJS}

.c.o:
		@echo "\n$(NAME): $(GREEN)object files were created$(RESET)"
		${CC} ${FLAGS} -c $< -o ${<:.c=.o} ${INCLUDE}

clean:
		@echo "\n$(NAME): $(RED)object files were deleted$(RESET)"
		${REMOVE} ${OBJS}
		@echo

fclean:		clean
		@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"
		${REMOVE} ${NAME}
		@echo

re :		fclean all
