/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:29:04 by marmoral          #+#    #+#             */
/*   Updated: 2023/08/08 21:29:19 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	smart_pa(t_list **A, t_list **B)
{
	size_t	i;
	int		value;

	i = maxvalind_lst(*B);
	value = maxval_lst(*B);
	if (i < (lstlen(*B) / 2))
		while ((*B)->value != value)
			rb(B);
	else
		while ((*B)->value != value)
			rrb(B);
	pa(A, B);
}

void	smart_pb(t_list **A, t_list **B, size_t n)
{
	size_t	x;
	size_t	i;

	i = 0;
	x = minvalind_lst(*A, n);
	if (x <= n / 2)
		while (i++ < x)
			ra(A);
	else
		while (i++ < n - x)
			rra(A);
	pb(A, B);
}

void	sort3(t_list **A)
{
	t_list	*tmp;

	tmp = *A;
	if (tmp->next->next->value > tmp->next->value
		&& tmp->next->next->value > tmp->value)
		sa(A);
	else if (tmp->next->value > tmp->next->next->value
		&& tmp->next->value > tmp->value)
	{
		if (tmp->value > tmp->next->next->value)
			rra(A);
		else
		{
			sa(A);
			ra(A);
		}
	}
	else if (tmp->next->value > tmp->next->next->value)
	{
		sa(A);
		rra(A);
	}
	else
		ra(A);
}
