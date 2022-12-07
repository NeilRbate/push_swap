/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:01:34 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/07 10:44:21 by jbarbate         ###   ########.fr       */
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

	elem = root->next;
	if (root->next != NULL && root->next != root)
	{
		elem = elem->next;
		while (elem->next != root)
		{
			free(elem->prev);
			elem = elem->next;
		}
	}
	free(elem);
	free(root);
	return (NULL);
}
