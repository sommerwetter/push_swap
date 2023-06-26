/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 22:28:23 by marmoral          #+#    #+#             */
/*   Updated: 2023/06/26 15:44:44 by marmoral         ###   ########.fr       */
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
	//t_list	**a;
	//t_list	**b;
	size_t	size;
	//size_t	i; //debugg
	int	*array_nbrs;
	
	size = 0;
	array_nbrs = a_check(ac, av, &size);
	//i = 0;
	/*if (!array_nbrs)
	{
		ft_putendl_fd("NULL", 1);
		exit (0);
	}
	while (i < size)
	{
		ft_putnbr_fd(array_nbrs[i++], 1);
		write(1, "\n", 1);
	}
	ft_putnbr_fd(size, 1); //debugg*/
	free (array_nbrs);
	return (0);
}
