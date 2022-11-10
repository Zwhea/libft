# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: twang <twang@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:41:17 by twang             #+#    #+#              #
#    Updated: 2022/11/08 09:33:51 by twang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = libft.h
SOURCES = $(shell find . -type f -name 'ft_*.c')
OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I .

all :	$(NAME)

$(NAME) : $(OBJECTS)
	$(AR) rcs $@ $^

%.o : %.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJECTS)

fclean : clean 
	$(RM) $(NAME)

re : fclean
	$(MAKE) all

.PHONY: all clean fclean re
