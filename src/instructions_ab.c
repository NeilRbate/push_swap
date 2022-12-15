/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:53:26 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/15 14:16:54 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ss(t_stack *root_a, t_stack *root_b)
{
	int	a;
	int	b;

	a = sa(root_a);
	b = sb(root_b);
	ft_putendl_fd("ss", 1);
	return (a + b);
}

int	rr(t_stack *root_a, t_stack *root_b)
{
	int	a;
	int	b;

	a = ra(root_a);
	b = rb(root_b);
	return (0);
}

int	rrr(t_stack *root_a, t_stack *root_b)
{
	int	a;
	int	b;

	a = rra(root_a);
	b = rrb(root_b);
	ft_putendl_fd("rrr", 1);
	return (a + b);
}
