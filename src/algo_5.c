/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:00:17 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/15 13:41:16 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_fivenb(t_stack *root_a)
{
	t_stack	*root_b;

	root_b = ft_new_root();
	while (ft_stack_size(root_a) > 3)
		pb(root_a, root_b);
	ft_dispatch(root_a);
	while (ft_stack_size(root_b) > 0)
	{
		if (root_b->next->data < root_a->next->data)
			pa(root_b, root_a);
		else
			rra(root_a);
	}
	return (0);
}
