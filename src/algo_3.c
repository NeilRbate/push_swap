/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:58:59 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/10 10:33:01 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_sort(int	*tab, t_stack *root_a)
{
	if (tab[0] < tab[1] && tab[1] < tab[2])
		return (0);
	else if (tab[0] > tab[1] && tab[1] < tab[2] && tab[0] < tab[2])
		return (s(root_a), ft_putendl_fd("sa", 1), 0);
	else if (tab[0] > tab[1] && tab[1] < tab[2] && tab[0] > tab[2])
		return (r(root_a), ft_putendl_fd("ra", 1), 0);
	else if (tab[0] > tab[1] && tab[1] > tab[2])
		return (s(root_a), rr(root_a), ft_putendl_fd("sa\nrra", 1), 0);
	else if (tab[0] < tab[1] && tab[1] > tab[2] && tab[0] < tab[2])
		return (s(root_a), r(root_a), ft_putendl_fd("sa\nra", 1), 0);
	else if (tab[0] < tab[1] && tab[1] > tab[2] && tab[0] > tab[2])
		return (rr(root_a), ft_putendl_fd("rra", 1), 0);
	return (0);
}

void	ft_threenb(t_stack *root_a)
{
	int		stock[3];
	int		i;
	t_stack	*elem;

	i = 0;
	elem = root_a->next;
	while (elem != root_a)
	{
		stock[i++] = elem->data;
		elem = elem->next;
	}
	ft_sort(stock, root_a);
}
