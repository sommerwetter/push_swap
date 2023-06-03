/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 22:28:23 by marmoral          #+#    #+#             */
/*   Updated: 2023/06/03 13:24:46 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	if (!check4error(av))
		ft_putendl_fd("Error", 1);
	else //Debuggin
		ft_putendl_fd("OK", 1);
	return (0);
}
