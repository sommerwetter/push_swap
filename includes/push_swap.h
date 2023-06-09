/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 22:28:31 by marmoral          #+#    #+#             */
/*   Updated: 2023/06/26 15:42:07 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}t_list;

int		check4error(char **av, size_t z);
long	ft_atol(const char *str);
int		*parser(int ac, char **av, size_t **size);
void	ft_free(char **str);
void	ft_memerror();

#endif