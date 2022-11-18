# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: twang <twang@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:41:17 by twang             #+#    #+#              #
#    Updated: 2022/11/18 13:44:23 by twang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = libft.h
SOURCES = $(shell find . -type f -name 'ft_*.c')
BONUS_SOURCES	= $(shell find . -type f -name 'ft_*_bonus.c')
OBJECTS = $(SOURCES:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I .

all :	$(NAME)

$(NAME) : $(OBJECTS)
	$(AR) rcs $@ $^

%.o : %.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@
	
bonus : $(OBJECTS) $(BONUS_OBJECTS)
	$(AR) rcs $(NAME) $^

clean :
	$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean : clean 
	$(RM) $(NAME)

re : fclean
	$(MAKE) all

.PHONY: all bonus clean fclean re
