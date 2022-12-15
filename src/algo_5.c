/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:00:17 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/12 13:57:05 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_fivenb(t_stack *root_a)
{
	t_stack	*root_b;
	int		size;

	root_b = ft_new_root();
	size = ft_stack_size(root_a);
	while (ft_stack_size(root_a) > 3)
	{
		p(root_a, root_b);
		ft_putendl_fd("pb", 1);
	}
	ft_dispatch(root_a);
	while (ft_stack_size(root_b) > 1 && ft_issort(root_a))
	{
		if (root_b->next->data < root_a->next->data)
		{
			p(root_b, root_a);
			ft_putendl_fd("pa", 1);
		}
	}
	return (0);
}
