/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:10:05 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/19 08:26:19 by jbarbate         ###   ########.fr       */
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
int		sa(t_stack *root);
int		pa(t_stack *root_src, t_stack *root_dst);
int		ra(t_stack *root);
int		rra(t_stack *root);
int		sb(t_stack *root);
int		pb(t_stack *root_src, t_stack *root_dst);
int		rb(t_stack *root);
int		rrb(t_stack *root);
int		ss(t_stack *root_a, t_stack *root_b);
int		rr(t_stack *root_a, t_stack *root_b);
int		rrr(t_stack *root_a, t_stack *root_b);
int		ft_twonb(t_stack *root_a);
int		ft_fivenb(t_stack *root_a);
int		ft_dispatch(t_stack *root_a);
int		ft_issort(t_stack *root);
int		ft_threenb(t_stack *root_a);
int		ft_isminus(t_stack *root_a, int value);
int		ft_bigsort(t_stack *root_a);
char	**free_split(char **split);
void	ft_print_stack(t_stack *root);
void	ft_delfirst(t_stack *root);
void	ft_pushback(t_stack *elem, t_stack *root);

#endif
