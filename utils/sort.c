/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:50:05 by marmoral          #+#    #+#             */
/*   Updated: 2023/08/08 21:08:32 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_sorted(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			if (lst->value > lst->next->value)
				return (0);
			lst = lst->next;
		}
	}
	return (1);
}

static void	make_chunk(t_list **A, t_list **B, int min, int max)
{
	size_t	i;
	int		i_firstnode;
	int		i_lastnode;

	i_firstnode = i_1st_node(*A, min, max);
	while (i_firstnode != -1)
	{
		i = 0;
		i_lastnode = i_last_node(*A, min, max);
		if (i_firstnode < (int)lstlen(*A) - i_lastnode)
			while (i_firstnode--)
				ra(A);
		else
			while (i++ < lstlen(*A) - i_lastnode)
				rra(A);
		pb(A, B);
		if ((*B)->value < (min + max) / 2 && lstlen(*B) > 2)
			rb(B);
		i_lastnode = i_last_node(*A, min, max);
		i_firstnode = i_1st_node(*A, min, max);
	}
}

static void	divide(t_list **A, t_list **B, int min, int max)
{
	size_t	i;
	size_t	chunks;
	int		range;

	chunks = 10;
	i = 0;
	if (lstlen(*A) > 300)
		chunks = 48;
	range = ((max - min) / chunks) + ((max - min) % chunks);
	while (i < chunks)
	{
		make_chunk(A, B, min + i * range, min + (i + 1) * range);
		i++;
	}
	while (lstlen(*B))
		smart_pa(A, B);
}

void	sort_stack(t_list **A, t_list **B)
{
	int	max;
	int	min;

	min = minval_lst(*A);
	max = maxval_lst(*A);
	if (is_sorted(*A))
		return ;
	if (lstlen(*A) > 50)
		divide(A, B, min, max);
	else
	{
		while (!is_sorted(*A) || lstlen(*B))
		{
			if (lstlen(*A) == 2)
				sa(A);
			else if (lstlen(*A) < 4)
			{
				sort3(A);
				while (lstlen(*B) > 0)
					pa(A, B);
			}
			else
				smart_pb(A, B, lstlen(*A));
		}
	}
}
