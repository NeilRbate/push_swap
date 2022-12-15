/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:50:23 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/15 13:37:42 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sa(t_stack *root)
{
	int		stock;

	if (ft_stack_size(root) < 2)
		return (-1);
	stock = root->next->next->data;
	root->next->next->data = root->next->data;
	root->next->data = stock;
	ft_putendl_fd("sa", 1);
	return (0);
}

int	pa(t_stack *root_src, t_stack *root_dst)
{
	t_stack	*elem;
	t_stack	*stock;

	if (ft_stack_size(root_src) == 0)
		return (0);
	else if (ft_stack_size(root_src) == 1)
	{
		elem = root_src->next;
		root_src->next = root_src;
		root_src->prev = root_src;
		ft_new_elem(elem->data, root_dst);
		free(elem);
	}
	else
	{
		elem = root_src->next;
		stock = elem->next;
		stock->prev = root_src;
		root_src->next = stock;
		ft_new_elem(elem->data, root_dst);
		free(elem);
	}
	ft_putendl_fd("pa", 1);
	return (0);
}

int	ra(t_stack *root)
{
	int	stock;

	if (ft_stack_size(root) < 2)
		return (-1);
	stock = root->next->data;
	root->next->data = root->prev->data;
	root->prev->data = stock;
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rra(t_stack *root)
{
	int		stock;
	t_stack	*first;
	t_stack	*last;

	if (ft_stack_size(root) < 2)
		return (-1);
	first = root->next;
	last = root->prev;
	stock = first->data;
	first->data = last->data;
	last->data = stock;
	ft_putendl_fd("rra", 1);
	return (0);
}
