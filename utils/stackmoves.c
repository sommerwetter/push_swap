/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackmoves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:53:06 by marmoral          #+#    #+#             */
/*   Updated: 2023/08/05 23:41:48 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*b4(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next->next)
		tmp = tmp->next;
	return (tmp);
}

void	swap(t_list **lst)
{
	t_list	*tmp;

	if (!*lst || !(*lst)->next)
	{
		ft_putendl_fd("Stack ist empty or not enough nodes", 1);
		return ;
	}
	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = (*lst)->next;
	(*lst)->next = tmp;
}

void	move_node2end(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	if (!*lst || !(*lst)->next)
	{
		ft_putendl_fd("Stack is empty or not enough nodes", 1);
		return ;
	}
	tmp = *lst;
	last = lstlast(*lst);
	*lst = (*lst)->next;
	last->next = tmp;
	tmp->next = 0;
}

void	move_last2top(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*b4last;

	if (!*lst || !(*lst)->next)
	{
		ft_putendl_fd("Stack is empty or not enough nodes", 1);
		return ;
	}
	tmp = *lst;
	last = lstlast(*lst);
	b4last = b4(*lst);
	*lst = last;
	last->next = tmp;
	b4last->next = 0;
}

void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	tmp = *dst;
	if (!*src)
		return ;
	*dst = *src;
	*src = (*src)->next;
	(*dst)->next = tmp;
}
