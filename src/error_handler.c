/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:25:38 by marmoral          #+#    #+#             */
/*   Updated: 2023/06/03 13:25:21 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	check_int(char *str)
{
	long	nbr;

	nbr = ft_atoi(str);
	//ft_putnbr_fd(nbr, 1); // debuggin
	if (!nbr && str[0] != '0')
		return (0);
	if (nbr > INT_MAX || nbr < INT_MIN)
		return (0);
	return (1);
}

static int	check4dup(char **av)
{
	size_t	i;
	size_t	x;
	int		tmp;
	int		tmp2;

	i = 1;
	x = i + 1;
	while (av[i])
	{
		tmp = ft_atoi(av[i]);
		while (av[x])
		{
			tmp2 = ft_atoi(av[x++]);
			if (tmp == tmp2)
				return (0);
		}
		i++;
		x = i + 1;
	}
	return (1);
}

int	check4error(char **av)
{
	size_t	i;

	i = 1;
	while (av[i])
		if (!check_int(av[i++]))
			return (0);
	if (!check4dup(av))
		return (0);
	return (1);
}
