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
SRCS = (wildcard *.c)

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
