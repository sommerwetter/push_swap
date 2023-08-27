# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 16:04:22 by marmoral          #+#    #+#              #
#    Updated: 2023/08/08 17:33:24 by marmoral         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -I ./includes/push_swap.h

LPATH	= ./libft/
SRCS	= $(addprefix src/, push_swap.c) $(addprefix utils/, error_handler.c ft_atol.c index_node.c info_stack.c list_func.c op_r.c op_sp.c parser.c smart_sort.c sort.c stackmoves.c)
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