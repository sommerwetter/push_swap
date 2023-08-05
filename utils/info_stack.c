/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:14:51 by marmoral          #+#    #+#             */
/*   Updated: 2023/08/05 23:42:12 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	minval_lst(t_list *lst)
{
	int	min;

	if (lst)
		min = lst->value;
	while (lst)
	{
		if (lst->value < min)
			min = lst->value;
		lst = lst->next;
	}
	return (min);
}

int	maxval_lst(t_list *lst)
{
	int	max;

	if (lst)
		max = lst->value;
	while (lst)
	{
		if (lst->value > max)
			max = lst->value;
		lst = lst->next;
	}
	return (max);
}

int	minvalind_lst(t_list *lst, size_t n)
{
	size_t	i_min;
	size_t	i;
	int		min;

	i_min = 0;
	i = 0;
	if (lst)
		min = lst->value;
	while (lst && i < n)
	{
		if (lst->value < min)
		{
			i_min = i;
			min = lst->value;
		}
		i++;
		lst = lst->next;
	}
	return (i_min);
}

int	maxvalind_lst(t_list *lst)
{
	size_t	i_max;
	size_t	i;
	int		max;

	i_max = 0;
	i = 0;
	if (lst)
		max = lst->value;
	while (lst)
	{
		if (lst->value > max)
		{
			i_max = i;
			max = lst->value;
		}
		i++;
		lst = lst->next;
	}
	return (i_max);
}
