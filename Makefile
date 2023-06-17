# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 15:23:51 by tbolkova          #+#    #+#              #
#    Updated: 2023/06/17 16:38:14 by tbolkova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program
NAME = libft

# Colors
NC			:= \033[0m
RED			:= \033[0;31m
GREEN		:= \033[0;32m
BLUE		:= \033[0;34m

# Compilation
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Debugging
FSANITIZE = -fsanitize=address

# Header
HEADER = ./libft.h

# Sources
SRC_PATH = src/

SRC = 	ft_isalpha.c \
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

SRCS = $(addprefix $(SRC_PATH), $(SRC))

# Objects
OBJ_PATH 	= obj/
OBJ 		= $(SRC:.c=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

# Rules
all: $(NAME)

$(OBJ_PATH)%.o : $(SRC_PATH)%.c $(HEADER)
	@echo "$(GREEN)Compiling: $< $(NC)"
	@$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)

$(NAME): $(OBJ_PATH) $(OBJS)
	@$(CC) -o $(NAME) $(OBJS) $(CFLAGS)
	@echo "$(BLUE) $(NAME) created $(NC)"

clean:
	@echo "Cleaning: $(RED) $(OBJ_PATH) $(NC)"
	@rm -rf $(OBJ_PATH)

fclean: clean
	@echo "Cleaning:$(RED) $(NAME) $(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
