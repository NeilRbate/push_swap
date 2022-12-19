/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:01:53 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/19 16:35:06 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_sort(t_stack	*root_a)
{
	t_stack	*root_b;
	int	max;
	int	bit;


	max = ft_stack_size(root_a) - 1;
	root_b = ft_new_root();
	while (num >> bit != 0)
		bit++;

}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	long	stock;

	stock = 0;
	i = 0;
	j = 1;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				stock = tab[i];
				tab[i] = tab[j];
				tab[j] = stock;
			}
			j++;
		}
			i++;
	}
}

int	ft_replace_data(t_stack	*root, int *tab)
{
	int		i;
	t_stack	*elem;

	i = -1;
	ft_sort_int_tab(tab, ft_stack_size(root));
	elem = root->next;
	while (i <= ft_stack_size(root))
	{
		i++;
		if (elem->data == tab[i] && elem != root)
		{
			elem->data = i;
			i = -1;
			elem = elem->next;
		}
	}
	return (0);
}

int	ft_bigsort(t_stack *root_a)
{
	int		*tab;
	int		i;
	t_stack	*elem;

	i = 0;
	elem = root_a->next;
	tab = malloc(sizeof(tab) * ft_stack_size(root_a));
	if (!tab)
		return (-1);
	while (i <= ft_stack_size(root_a) + 1)
	{
		tab[i++] = elem->data;
		elem = elem->next;
	}
	ft_replace_data(root_a, tab);
	free(tab);
	return (0);
}
