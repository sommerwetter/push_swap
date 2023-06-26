# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/02 22:28:17 by marmoral          #+#    #+#              #
#    Updated: 2023/06/26 14:33:28 by marmoral         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -I ./includes/push_swap.h

LPATH	= ./libft/
SRCS	= $(addprefix src/, push_swap.c) $(addprefix utils/, error_handler.c ft_atol.c ft_free_array.c parser.c)
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(MAKE) -C $(LPATH)
	$(CC) $(OBJS) $(CFLAGS) $(LPATH)libft.a -o $(NAME)
clean:
	rm -f $(OBJS)
	$(MAKE) clean -C $(LPATH)
fclean: clean
	rm -rf $(NAME)
	$(MAKE) fclean -C $(LPATH)

re: fclean all

.phony: all clean fclean re