/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:49:53 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/19 09:13:20 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sb(t_stack *root)
{
	int		stock;

	if (ft_stack_size(root) < 2)
		return (-1);
	stock = root->next->next->data;
	root->next->next->data = root->next->data;
	root->next->data = stock;
	ft_putendl_fd("sb", 1);
	return (0);
}

int	pb(t_stack *root_src, t_stack *root_dst)
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
	ft_putendl_fd("pb", 1);
	return (0);
}

int	rb(t_stack *root)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_stack_size(root) < 2)
		return (-1);
	first = root->next;
	last = root->prev;
	root->prev = first;
	root->next = first->next;
	first->prev = last;
	first->next = root;
	root->next->prev = root;
	last->next = first;
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rrb(t_stack	*root)
{
	t_stack	*first;
	t_stack	*last;
	t_stack	*blast;

	if (ft_stack_size(root) < 2)
		return (-1);
	last = root->prev;
	first = root->next;
	blast = last->prev;
	root->prev = blast;
	root->next = last;
	blast->next = root;
	last->prev = root;
	last->next = first;
	first->prev = last;
	ft_putendl_fd("rrb", 1);
	return (0);
}
