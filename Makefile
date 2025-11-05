# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: <your_glogin> <your_email>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 by <username>                 #+#    #+#              #
#    Updated: 2023/08/14 by <username>                ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Mandatory source files
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_atoi.c \
	ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_toupper.c \
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_calloc.c ft_substr.c

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