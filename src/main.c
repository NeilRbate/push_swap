/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:21:58 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/07 11:26:10 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>
int	main(int argc, char **argv)
{
	t_stack	*root_a;
	t_stack	*root_b;

	if (argc < 2)
		return (ft_putendl_fd("ERROR: Need more 1 arg", 1), 1);
	root_a = ft_argstack(argv + 1);
	root_b = ft_new_root();
	t_stack	*elem = root_a->next;
	while (elem != root_a)
	{
		printf("stack a -> %i\n", elem->data);
		elem = elem->next;
	}
	return (0);
}
