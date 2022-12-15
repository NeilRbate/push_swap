/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:10:05 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/14 11:35:58 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*prev;
	struct s_stack	*next;
}				t_stack;

t_stack	*ft_new_root(void);
t_stack	*ft_new_elem(int data, t_stack *root);
t_stack	*free_stack(t_stack *root);
t_stack	*ft_argstack(char **argv);
int		ft_stack_size(t_stack *root);
int		s(t_stack *root);
int		ss(t_stack *root_a, t_stack *root_b);
int		p(t_stack *root_src, t_stack *root_dst);
int		r(t_stack *root);
int		rab(t_stack *root_a, t_stack *root_b);
int		rr(t_stack *root);
int		rrab(t_stack *root_a, t_stack *root_b);
int		ft_twonb(t_stack *root_a);
int		ft_fivenb(t_stack *root_a);
int		ft_dispatch(t_stack *root_a);
int		ft_issort(t_stack *root);
int		ft_threenb(t_stack *root_a);
char	**free_split(char **split);
void	ft_print_stack(t_stack *root);

#endif
