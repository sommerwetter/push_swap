/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 07:03:31 by marmoral          #+#    #+#             */
/*   Updated: 2023/07/26 02:39:51 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}t_list;

int		check4error(char **av, size_t z);
long	ft_atol(const char *str);
int		*parser(int ac, char **av, size_t **size);
void	ft_free(char **str);
void	ft_memerror(void);
void	ft_free_stack(t_list **stack);
t_list	*lstnew(int value);
void	lstadd_back(t_list **lst, t_list *new);
void	initlst(int *array_nbrs, size_t size, t_list **lst);
int		maxval_lst(t_list *lst);
int		minval_lst(t_list *lst);
void	sort_stack(t_list **A, t_list **B);
size_t	lstlen(t_list *lst);
int		ft_abs(int num);
int		i_1st_node(t_list *lst, int range_start, int range_end);
int		i_last_node(t_list *lst, int range_start, int range_end);
void	ra(t_list **A);
void	rra(t_list **A);
void	rrb(t_list **B);
t_list	*lstlast(t_list *lst);
void	move_node2end(t_list **lst);
void	move_last2top(t_list **lst);
void	swap(t_list **lst);
void	push(t_list **src, t_list **dst);
void	pb(t_list **A, t_list **B);
void	pa(t_list **A, t_list **B);
void	sa(t_list **A);
t_list	*b4(t_list *lst);
int		minvalind_lst(t_list *lst, size_t n);
int		maxvalind_lst(t_list *lst);
void	sort3(t_list **A);
void	smart_pa(t_list **A, t_list **B);
void	smart_pb(t_list **A, t_list **B, size_t n);
void	rb(t_list **B);

#endif