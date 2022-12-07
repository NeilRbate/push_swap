/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:00:17 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/07 14:32:20 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fivenb(t_stack *root_a)
{
	t_stack	*root_b;

	root_b = ft_new_root();
	while (ft_stack_size(root_a) > 3)
	{
		p(root_a, root_b);
		ft_putendl_fd("pb", 1);
	}
	ft_dispatch(root_a);

}
