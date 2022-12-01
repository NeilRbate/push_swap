/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:10:05 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/01 15:17:28 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	void			*data;
	struct s_stack	*prev;
	struct s_stack	*next;
}				t_stack;

t_stack	*ft_new_root(void);
t_stack	*ft_new_elem(void *data, t_stack *root);
int		ft_stack_size(t_stack *root);

#endif
