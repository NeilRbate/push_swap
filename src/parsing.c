/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:02:35 by jbarbate          #+#    #+#             */
/*   Updated: 2022/12/16 11:17:09 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_isoverflow(char	*argv)
{
	if (ft_strlen(argv) > 11)
		return (-1);
	if (ft_strlen(argv) == 11 && ft_strcmp(argv, "-2147483648") > 0)
		return (-1);
	if (ft_strlen(argv) == 10 && ft_strcmp(argv, "2147483647") > 0)
		return (-1);
	return (0);
}

t_stack	*ft_createstack(char **argv)
{
	int		i;
	t_stack	*root;

	i = 0;
	root = ft_new_root();
	while (argv[i])
		i++;
	i--;
	while (i >= 0)
	{
		ft_new_elem(ft_atoi(argv[i]), root);
		i--;
	}
	return (root);
}

int	ft_isvalidarg(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] == '-' && i == 0)
			i++;
		if (ft_isdigit(argv[i]) == 0)
			return (-1);
		i++;
	}
	return (0);
}

int	ft_isvalidvalue(char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		if (ft_isoverflow(argv[i]) != 0)
			return (ft_putendl_fd("ERROR: int overflow", 1), -1);
		if (ft_isvalidarg(argv[i]) != 0)
			return (ft_putendl_fd("ERROR: invalid value", 1), -1);
		while (argv[j])
		{
			if (ft_strlen(argv[i]) == ft_strlen(argv[j])
				&& ft_strcmp(argv[i], argv[j]) == 0)
				return (ft_putendl_fd("ERROR: 2 equals values", 1), -1);
			j++;
		}
		i++;
	}
	return (0);
}

t_stack	*ft_argstack(char **argv)
{
	if (ft_isvalidvalue(argv) != 0)
		return (NULL);
	return (ft_createstack(argv));
}
