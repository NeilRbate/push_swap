/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:50:23 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/20 11:25:38 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	sa(t_stack *root, int a)
{
	int		stock;

	if (ft_stack_size(root) < 2)
		return (-1);
	stock = root->next->next->data;
	root->next->next->data = root->next->data;
	root->next->data = stock;
	if (a > 0)
		ft_putendl_fd("sa", 1);
	return (0);
}

int	pa(t_stack *root_src, t_stack *root_dst, int a)
{
	t_stack	*elem;
	t_stack	*stock;

	if (ft_stack_size(root_src) == 0)
		return (0);
	else if (ft_stack_size(root_src) == 1)
	{
		elem = root_src->next;
		root_src->next = NULL;
		root_src->prev = NULL;
		ft_new_elem(elem->data, root_dst);
		free(elem);
	}
	else
	{
		elem = root_src->next;
		stock = elem->next;
		stock->prev = root_src;
		root_src->next = stock;
		stock = ft_new_elem(elem->data, root_dst);
		free(elem);
	}
	if (a > 0)
		ft_putendl_fd("pa", 1);
	return (0);
}

int	ra(t_stack *root, int a)
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
	if (a > 0)
		ft_putendl_fd("ra", 1);
	return (0);
}

int	rra(t_stack	*root, int a)
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
	if (a > 0)
		ft_putendl_fd("rra", 1);
	return (0);
}
