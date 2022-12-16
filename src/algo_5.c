/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:58:59 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/16 10:39:57 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_isminus(t_stack *root_a, int value)
{
	t_stack	*elem;

	elem = root_a->next;
	while (elem != root_a)
	{
		if (value > elem->data)
			return (0);
		elem = elem->next;
	}
	return (1);
}

int	ft_sortfive(t_stack *root_a, t_stack *root_b)
{
	t_stack	*elem;

	elem = root_a->next;
	while (ft_stack_size(root_a) > 3)
	{
		if (ft_isminus(root_a, elem->data) == 1)
		{
			pb(root_a, root_b);
			elem = root_a->next;
		}
		else if (ft_isminus(root_a, root_a->prev->data) == 1)
		{
			rra(root_a);
			pb(root_a, root_b);
			elem = root_a->next;
		}
		else
		{
			ra(root_a);
			elem = root_a->next;
		}
	}
	return (0);
}

int	ft_twonb(t_stack *root_a)
{
	if (ft_issort(root_a) == 1)
		return (0);
	sa(root_a);
	return (0);
}

int	ft_threenb(t_stack *root_a)
{
	t_stack	*elem1;
	t_stack	*elem2;
	t_stack	*elem3;

	elem1 = root_a->next;
	elem2 = elem1->next;
	elem3 = root_a->prev;
	if (elem1->data > elem2->data && elem2->data < elem3->data
		&& elem3->data > elem1->data)
		return (sa(root_a), 0);
	else if (elem1->data > elem2->data && elem2->data > elem3->data
		&& elem3->data < elem1->data)
		return (ra(root_a), sa(root_a), 0);
	else if (elem1->data > elem2->data && elem2->data > elem3->data)
		return (ra(root_a), rra(root_a), 0);
	else if (elem1->data < elem2->data && elem2->data > elem3->data
		&& elem3->data < elem1->data)
		return (sa(root_a), rra(root_a), 0);
	else if (elem1->data > elem2->data && elem2->data < elem3->data)
		return (ra(root_a), 0);
	else if (elem1->data < elem2->data && elem2->data > elem3->data)
		return (sa(root_a), ra(root_a), 0);
	return (1);
}

int	ft_fivenb(t_stack *root_a)
{
	t_stack	*root_b;

	root_b = ft_new_root();
	ft_sortfive(root_a, root_b);
	ft_dispatch(root_a);
	while (ft_stack_size(root_b) > 0)
		pa(root_b, root_a);
	return (0);
}
