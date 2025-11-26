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

# **************************************************************************** #
# VARIABLES                                                                     #
# **************************************************************************** #

NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

# Source files - Part 1: Libc functions
SRCS		= 

# Bonus source files
BONUS_SRCS	= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c\
	ft_lstsize_bonus.c ft_lstlast_bonus.c

# Object files
OBJS		= $(SRCS:.c=.o)
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

# **************************************************************************** #
# RULES                                                                         #
# **************************************************************************** #

# Main rule - creates the library
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Libft compiled successfully!"

# Compile .c files to .o files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Bonus rule - compiles with bonus functions
bonus: $(OBJS) $(BONUS_OBJS)
	@$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "Libft with bonus compiled successfully!"

# Standard rules
all: $(NAME)

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "Object files cleaned!"

fclean: clean
	@$(RM) $(NAME)
	@echo "Library cleaned!"

re: fclean all

# Phony targets
.PHONY: all clean fclean re bonus
