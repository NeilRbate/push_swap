/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:00:17 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/07 15:30:25 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

int	ft_fivenb(t_stack *root_a)
{
	t_stack	*root_b;

	root_b = ft_new_root();
	while (ft_stack_size(root_a) > 3)
	{
		p(root_a, root_b);
		ft_putendl_fd("pb", 1);
	}
	ft_dispatch(root_a);
	while (ft_stack_size(root_b) > 0)
	{
		if (root_b->next->data < root_a->next->data)
		{
			p(root_b, root_a);
			ft_putendl_fd("pa", 1);
		}
		else
		{
			r(root_a);
			ft_putendl_fd("ra", 1);
		}
	}
	t_stack *elem = root_a->next;
	while (elem != root_a)
	{
		printf("elem data ->%i\n", elem->data);
		elem = elem->next;
	}
	return (0);
}
