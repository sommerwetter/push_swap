/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:04:14 by marmoral          #+#    #+#             */
/*   Updated: 2023/07/24 17:11:25 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	*parse(int count, char **tmp, size_t z)
{
	int	i;
	int	x;
	int	*array_nbrs;

	i = z;
	x = 0;
	array_nbrs = (int *)malloc(sizeof(int) * count);
	if (!array_nbrs)
		ft_memerror();
	while (tmp[i])
		array_nbrs[x++] = ft_atoi(tmp[i++]);
	ft_free(tmp);
	return (array_nbrs);
}

static	int	ft_count(char **tmp)
{
	size_t	i;

	i = 0;
	while (tmp[i])
		i++;
	return (i);
}

int	*parser(int ac, char **av, size_t **size)
{
	char		**tmp;
	size_t		z;
	size_t		count;

	if (ac == 2)
	{
		z = 0;
		tmp = ft_split(av[1], ' ');
		count = ft_count(tmp);
	}
	else
	{
		z = 1;
		tmp = av;
		count = ac - 1;
	}
	if (!check4error(tmp, z))
	{
		ft_putendl_fd("Error", 1);
		if (ac == 2)
			ft_free(tmp);
		exit (0);
	}
	**size = count;
	return (parse(count, tmp, z));
}
