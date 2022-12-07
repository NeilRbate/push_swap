/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:44:57 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/07 13:56:12 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_dispatch(t_stack *root_a)
{
	if (ft_stack_size(root_a) == 1)
		return (0);
	else if (ft_stack_size(root_a) == 2)
		return (ft_twonb(root_a));
	else if (ft_stack_size(root_a) == 3)
		return (ft_threenb(root_a), 0);

	return (0);
}