/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:21:58 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/20 13:01:38 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*root_a;

	if (argc < 2)
		return (ft_putendl_fd("ERROR", 1), 1);
	root_a = ft_argstack(argv + 1);
	if (root_a == NULL)
		return (-1);
	if (ft_issort(root_a) == 1)
	{
		free_stack(root_a);
		return (0);
	}
	if (ft_dispatch(root_a) != 0)
	{
		root_a = free_stack(root_a);
		return (-1);
	}
	root_a = free_stack(root_a);
	return (0);
}
