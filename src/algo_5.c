/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:00:17 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/15 16:00:49 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_place(t_stack *root_a, t_stack *root_b)
{
	t_stack	*elem;
	int	data;

	elem = root_a->next;
	data = root_b->next->data;
	while (ft_stack_size(root_b) > 0)
	{
		if (data < elem->data && root_a->prev->data > data)
			pa(root_b, root_a);
		else if(data > elem->data && root_a->prev->data < data)
		{
			pa(root_b, root_a);
			ra(root_a);
		}
		else
			ra(root_a);
	}
	return (0);
}

int	ft_fivenb(t_stack *root_a)
{
	t_stack	*root_b;

	root_b = ft_new_root();
	while (ft_stack_size(root_a) > 3)
		pb(root_a, root_b);
	ft_dispatch(root_a);
	ft_dispatch(root_b);
		ft_place(root_a, root_b);
		ft_putendl_fd("----------", 1);
	return (0);
}
