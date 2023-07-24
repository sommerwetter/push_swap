/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 07:10:41 by marmoral          #+#    #+#             */
/*   Updated: 2023/07/24 17:08:39 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	int	*a_check(int ac, char **av, size_t *size)
{
	if (ac == 1)
	{
		ft_putendl_fd("Error", 1);
		exit (0);
	}
	return (parser(ac, av, &size));
}

int	main(int ac, char **av)
{
	t_list	**a;
	t_list	**b;
	size_t	size;
	int		*array_nbrs;

	size = 0;
	array_nbrs = a_check(ac, av, &size);
	a = (t_list **)malloc(sizeof(t_list));
	b = (t_list **)malloc(sizeof(t_list));
	if (!a || !b)
		return (0);
	*a = 0;
	*b = 0;
	
	//need to code: initialize list and start sorting//
	
	free(array_nbrs);
	ft_free_stack(a);
	ft_free_stack(b);
}
