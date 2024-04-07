# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 17:52:39 by cmartyr           #+#    #+#              #
#    Updated: 2023/07/28 03:54:36 by cmartyr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	  ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
	  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	  ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
	  ft_toupper.c

OBJECTS = $(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJECTS)
	ar -r $@ $^

clean:
	rm -rf $(OBJECTS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
