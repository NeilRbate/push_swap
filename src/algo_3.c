/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:58:59 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/14 11:55:05 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_twonb(t_stack *root_a)
{
	s(root_a);
    return (ft_putendl_fd("sa", 1), 0);
}

int	ft_sort(int	*tab, t_stack *root_a)
{
	t_stack	*elem;

	elem = root_a->next;
	if (elem->data > elem->next->data && root_a->prev->data > elem->data)
		return(ft_putendl_fd("sa", 1), s(root_a), 0);
	if (tab[0] == 0)
		return 12;
	return (0);
}

int	ft_threenb(t_stack *root_a)
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
	return (ft_sort(stock, root_a));
}
