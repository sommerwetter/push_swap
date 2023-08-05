/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 07:10:41 by marmoral          #+#    #+#             */
/*   Updated: 2023/08/05 23:42:39 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	int	*a_check(int ac, char **av, size_t *size)
{
	if (ac == 1)
		exit (0);
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
	*a = NULL;
	*b = NULL;
	initlst(array_nbrs, size, a);
	if (size > 1)
		sort_stack(a, b);
	free(array_nbrs);
	ft_free_stack(a);
	ft_free_stack(b);
	return (0);
}
