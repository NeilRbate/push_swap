/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:53:26 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/19 19:08:29 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ss(t_stack *root_a, t_stack *root_b, int a)
{
	int	b;
	int	c;

	b = sa(root_a, 0);
	c = sb(root_b, 0);
	if (a > 0)
		ft_putendl_fd("ss", 1);
	return (b + c);
}

int	rr(t_stack *root_a, t_stack *root_b, int a)
{
	int	b;
	int	c;

	b = ra(root_a, 0);
	c = rb(root_b, 0);
	if (a > 0)
		ft_putendl_fd("rr", 1);
	return (b + c);
}

int	rrr(t_stack *root_a, t_stack *root_b, int a)
{
	int	b;
	int	c;

	b = rra(root_a, 0);
	c = rrb(root_b, 0);
	if (a > 0)
		ft_putendl_fd("rrr", 1);
	return (b + c);
}
