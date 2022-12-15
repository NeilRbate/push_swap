/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:58:59 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/15 13:10:04 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_twonb(t_stack *root_a)
{
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
