/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:51:31 by marmoral          #+#    #+#             */
/*   Updated: 2023/08/05 23:42:01 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_list **A)
{
	move_node2end(A);
	ft_putendl_fd("ra", 1);
}

void	rb(t_list **B)
{
	move_node2end(B);
	ft_putendl_fd("rb", 1);
}

void	rra(t_list **A)
{
	move_last2top(A);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_list **B)
{
	move_last2top(B);
	ft_putendl_fd("rrb", 1);
}
