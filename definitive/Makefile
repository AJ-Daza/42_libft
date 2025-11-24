# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 10:12:55 by adaza-ru          #+#    #+#              #
#    Updated: 2025/11/17 10:12:55 by adaza-ru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Mandatory source files
SRCS = ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c\
	ft_isprint.c ft_tolower.c ft_toupper.c ft_memchr.c ft_memmove.c\
	ft_strjoin.c ft_strlen.c ft_strchr.c

# Object files
OBJS = $(SRCS:.c=.o)

# Header file
HEADER = libft.h

# Default target
all: $(NAME)

# Create library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Compile source files to object files
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	$(RM) $(OBJS)

# Full clean (objects and library)
fclean: clean
	$(RM) $(NAME)

# Rebuild
re: fclean all

# Phony targets
.PHONY: all clean fclean re
