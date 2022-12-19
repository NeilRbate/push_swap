/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:01:53 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/19 09:18:20 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_putup(t_stack *root_a)
{
	int		i;
	int		size;
	int		value;
	t_stack	*elem;

	i = 0;
	size = ft_stack_size(root_a);
	elem = root_a->next;
	while (ft_isminus(root_a, elem->data) == 0 && elem != root_a)
	{
		elem = elem->next;
		i++;
	}
	value = elem->data;
	if (i > (size / 2))
	{
		while (value != root_a->next->data)
			rra(root_a);
	}
	else if (i <= (size / 2))
	{
		while (value != root_a->next->data)
			ra(root_a);
	}
	return (0);
}

int	ft_bigsort(t_stack *root_a)
{
	t_stack	*elem;
	t_stack	*root_b;

	root_b = ft_new_root();
	elem = root_a->next;
	while (ft_stack_size(root_a) > 1)
	{
		if (ft_isminus(root_a, elem->data) == 1)
			pb(root_a, root_b);
		else if (ft_isminus(root_a, root_a->prev->data) == 1)
		{
			rra(root_a);
			pb(root_a, root_b);
		}
		else
			ft_putup(root_a);
		elem = root_a->next;
	}
	while (ft_stack_size(root_b) > 0)
		pa(root_b, root_a);
	return (0);
}
