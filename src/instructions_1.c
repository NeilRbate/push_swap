/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:49:53 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/07 15:07:49 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	s(t_stack *root)
{
	t_stack	*elem_1;
	t_stack	*elem_2;

	if (ft_stack_size(root) < 2)
		return (-1);
	elem_1 = root->next;
	elem_2 = elem_1->next;
	elem_1->next = elem_2->next;
	root->next = elem_2;
	elem_2->next = elem_1;
	elem_2->prev = root;
	elem_1->prev = elem_2;
	return (0);
}

int	ss(t_stack *root_a, t_stack *root_b)
{
	int	a;
	int	b;

	a = s(root_a);
	b = s(root_b);
	return (a + b);
}

int	p(t_stack *root_src, t_stack *root_dst)
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
		ft_new_elem(elem->data, root_dst);
		free(elem);
	}
	return (0);
}

int	r(t_stack *root)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*stock;

	if (ft_stack_size(root) < 2)
		return (-1);
	first = root->next;
	second = first->next;
	stock = root->prev;
	stock->next = first;
	first->prev = stock;
	first->next = root;
	second->prev = root;
	root->next = second;
	return (0);
}

int	rab(t_stack *root_a, t_stack *root_b)
{
	int	a;
	int	b;

	a = r(root_a);
	b = r(root_b);
	return (a + b);
}
