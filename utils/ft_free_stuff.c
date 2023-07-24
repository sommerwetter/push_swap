/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stuff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:04:07 by marmoral          #+#    #+#             */
/*   Updated: 2023/07/24 17:10:30 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		free (str[i++]);
	free(str);
}

void	ft_free_stack(t_list **stack)
{
	t_list	*tmp;
	t_list	*start;

	start = *stack;
	while (start)
	{
		tmp = *stack;
		start = start->next;
		free(tmp);
	}
	free(stack);
}
