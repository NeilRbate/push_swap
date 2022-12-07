/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:48:22 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/07 14:06:33 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_twonb(t_stack *root_a)
{
	t_stack	*elem;
	int		stock;

	elem = root_a->next;
	stock = elem->data;
	elem = elem->next;
	if (stock < elem->data)
		return (0);
	else
		s(root_a);
	return (ft_putendl_fd("sa", 1), 0);
}
