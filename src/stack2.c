/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:27:39 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/15 11:36:11 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_delfirst(t_stack *root)
{
	t_stack	*stock;

	stock = root->next;
	stock->next->prev = root;
	root->next = stock->next;
}

void	ft_pushback(t_stack	*elem, t_stack *root)
{
	t_stack	*stock;

	stock = root->prev;
	stock->next = elem;
	elem->prev = stock;
	elem->next = root;
}
