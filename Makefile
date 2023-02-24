# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gt-serst <gt-serst@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 22:06:54 by geraudtsers       #+#    #+#              #
#    Updated: 2023/02/24 12:20:15 by gt-serst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar rcs
RM				=	rm -rf

SRCS			=	ft_printf.c ft_printchar.c ft_printstr.c ft_print_address.c ft_printnbr_base.c

OBJS			=	$(addprefix srcs/, $(SRCS:.c=.o))

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

.c.o:
				$(CC) $(FLAGS) -c -I./includes $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
				cp	$(LIBFT) $(NAME)
					$(AR) $(NAME) $(OBJS)

$(LIBFT):
				make -C $(LIBFT_PATH) all

clean:
				make -C $(LIBFT_PATH) clean
				$(RM) $(OBJS)

fclean:	clean
				make -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
