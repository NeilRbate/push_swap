/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:45:02 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/20 08:17:10 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*ft_new_root(void)
{
	t_stack	*root;

	root = malloc(sizeof(t_stack));
	if (!root)
		return (NULL);
	root->prev = NULL;
	root->next = NULL;
	root->data = 0;
	return (root);
}

t_stack	*ft_new_elem(int data, t_stack *root)
{
	t_stack	*elem;

	elem = malloc(sizeof(t_stack));
	if (!elem)
		return (ft_putendl_fd("ERROR", 1), NULL);
	elem->prev = root;
	if (root->next != NULL && root->prev != NULL)
	{
		elem->next = root->next;
		elem->next->prev = elem;
	}
	else
	{
		elem->next = root;
		root->prev = elem;
	}
	root->next = elem;
	elem->data = data;
	return (elem);
}

int	ft_stack_size(t_stack *root)
{
	int		i;
	t_stack	*elem;

	i = 0;
	if (root->next == NULL || root->next == root)
		return (0);
	elem = root->next;
	while (elem != root)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}

int	ft_issort(t_stack *root)
{
	t_stack	*elem;
	t_stack	*elem2;

	elem = root->next;
	while (elem != root)
	{
		elem2 = elem->next;
		if ((elem->data > elem2->data) && elem2 != root)
			return (0);
		elem = elem->next;
	}
	return (1);
}

void	ft_print_stack(t_stack *root)
{
	t_stack	*elem;

	elem = root->next;
	while (elem != root)
	{
		ft_putnbr_fd(elem->data, 1);
		ft_putchar_fd('\n', 1);
		elem = elem->next;
	}
}
