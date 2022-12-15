/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:21:58 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/15 11:12:15 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*root_a;

	if (argc < 2)
		return (ft_putendl_fd("ERROR: Need more 1 arg", 1), 1);
	root_a = ft_argstack(argv + 1);
	if (ft_issort(root_a) == 1)
	{
		return (ft_putendl_fd("IS SORT", 1), 1);
	}
	ft_dispatch(root_a);
	ft_print_stack(root_a);
	return (0);
}
