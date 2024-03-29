/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:01:34 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/20 11:41:34 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	while (i > 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
	return (NULL);
}

t_stack	*free_stack(t_stack *root)
{
	t_stack	*elem;
	t_stack	*stock;

	elem = root->next;
	stock = elem->next;
	if (ft_stack_size(root) == 1)
	{
		free(elem);
		return (NULL);
	}
	else if (ft_stack_size(root) > 1)
	{
		while (stock != root)
		{
			free(elem);
			elem = stock;
			stock = elem->next;
		}
	}
	free(elem);
	free(root);
	return (NULL);
}
