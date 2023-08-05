/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_sp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:18:13 by marmoral          #+#    #+#             */
/*   Updated: 2023/08/05 23:41:58 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_list **A, t_list **B)
{
	push(A, B);
	ft_putendl_fd("pb", 1);
}

void	pa(t_list **A, t_list **B)
{
	push(B, A);
	ft_putendl_fd("pa", 1);
}

void	sa(t_list **A)
{
	swap(A);
	ft_putendl_fd("sa", 1);
}
