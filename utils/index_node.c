/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:42:11 by marmoral          #+#    #+#             */
/*   Updated: 2023/08/05 23:42:17 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	i_1st_node(t_list *lst, int range_start, int range_end)
{
	size_t	i;

	i = 0;
	while (lst && (lst->value < range_start || lst->value > range_end))
	{
		lst = lst->next;
		i++;
	}
	if (!lst)
		return (-1);
	return (i);
}

int	i_last_node(t_list *lst, int range_start, int range_end)
{
	size_t	i;
	size_t	last;

	i = 0;
	while (lst)
	{
		if (lst->value >= range_start && lst->value <= range_end)
			last = i;
		lst = lst->next;
		i++;
	}
	return (last);
}
