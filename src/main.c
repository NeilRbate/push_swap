/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:21:58 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/06 11:36:41 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>
int	main(void)
{
	t_stack	*root;
	t_stack	*root_b;
	t_stack *elem;
	int		i;

	i = 0;
	root = ft_new_root();
	ft_new_elem((int*)123, root);
	ft_new_elem((int*)10, root);
	ft_new_elem((int*)42, root);
	ft_new_elem((int*)21, root);
	ft_new_elem((int*)24, root);
	elem = root->next;

	root_b = ft_new_root();
	ft_new_elem((int*)1, root_b);
	ft_new_elem((int*)2, root_b);
	ft_new_elem((int*)3, root_b);
	while (elem != root)
	{
		printf("stack a->%i\n", (int)elem->data);
		elem = elem->next;
	}
	printf("---------------\n");
	elem = root_b->next;
	while (elem != root_b)
	{
		printf("stack b -> %i\n", (int)elem->data);
		elem = elem->next;
	}
	
	printf("---------------\n");
	printf("---------------\n");

	rr(root);
	elem = root->next;
	while (elem != root)
	{
		printf("stack a-> %i\n", (int)elem->data);
		elem = elem->next;
	}

	printf("---------------\n");
	elem = root_b->next;
	while (elem != root_b)
	{
		printf("stack b -> %i\n", (int)elem->data);
		elem = elem->next;
	}
	return (0);
}
