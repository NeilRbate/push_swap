/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:13:11 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/06 11:38:09 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rr(t_stack *root)
{
	t_stack	*last;
	t_stack	*before_last;
	t_stack	*stock;

	if (ft_stack_size(root) < 2)
		return (-1);
	last = root->prev;
	before_last = last->prev;
	stock = root->next;
	stock->prev = last;
	last->next = stock;
	last->prev = root;
	before_last->next = root;
	root->prev = before_last;
	return (0);
}

int	rrab(t_stack *root_a, t_stack *root_b)
{
	int	a;
	int	b;

	a = rr(root_a);
	b = rr(root_b);
	return (a + b);
}
