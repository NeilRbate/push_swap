/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:21:58 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/01 15:23:25 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>
int	main(void)
{
	t_stack	*root;
	t_stack *elem;
	int		i;

	i = 0;
	root = ft_new_root();
	elem = ft_new_elem((int*)123, root);
	root->prev = elem;
	root->next = elem;
	ft_new_elem((int*)5, root);
	ft_new_elem((int*)42, root);
	ft_new_elem((int*)21, root);
	ft_new_elem((int*)24, root);
	i = ft_stack_size(root);
	elem = root->next;
	while (elem != root)
	{
		printf("->%i\n", (int)elem->data);
		elem = elem->next;
	}
		elem = root->prev;
		printf("->%i\n", (int)elem->data);
		elem = elem->prev;
		printf("->%i\n", (int)elem->data);
	
	printf("pile size -> %i\n", i);
	return (0);
}
