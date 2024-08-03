# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 15:23:51 by tbolkova          #+#    #+#              #
#    Updated: 2024/08/02 12:07:41 by tbolkova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilation
NAME = libft
CC = gcc
FLAGS = -Wall -Wextra -Werror
DEBUG = -g -fsanitize=address

# Paths
SRC_PATH = src/
OBJ_PATH = obj/
TEST_PATH = tests/

# SRC Files

SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c 

# OBJ Files

OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))

# Colors

GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;34m
RED = \033[0;31m
DEFAULT = \033[0;39m

# Rules

all: $(NAME)

$(OBJ_PATH):
		@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o : $(SRC_PATH)%.c | $(OBJ_PATH)
		@$(CC) -c $(FLAGS) -o $@ $<

$(NAME): $(OBJ_PATH) $(OBJS)
		@$(CC) -o $(NAME) $(OBJS) $(FLAGS) $(DEBUG)
		@echo "$(GREEN)Executable <$(NAME)> compiled successfully.$(DEFAULT)"

clean:
		@$(RM) -r $(OBJ_PATH)
		clear
		@echo "$(YELLOW)Object files deleted.$(DEFAULT)"

fclean: clean
		@$(RM) $(NAME)
		clear
		@echo "$(RED)All <$(NAME)> executables deleted.$(DEFAULT)"

re: fclean all

# New target to run a specific test file
run_test:
ifndef TEST
	@echo "Error: TEST variable is not set. Usage: make run_test TEST=<test_file.c>"
	@exit 1
endif
	@if [ ! -f $(TEST_PATH)$(TEST) ]; then echo "Error: Test file $(TEST_PATH)$(TEST) does not exist."; exit 1; fi
	@$(CC) $(FLAGS) $(DEBUG) -o run_test $(SRC_PATH)*.c $(TEST_PATH)$(TEST)
	@./run_test
	@$(RM) run_test

# New target to display the menu and run tests
menu:
	clear
	@./script/run_tests.sh

.PHONY: all clean fclean re run_test menu