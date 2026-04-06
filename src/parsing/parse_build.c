/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_build.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 14:54:11 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/06 15:47:13 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	build_stack_from_args(t_stack *stack, char **argv)
{
	int		i;
	int		c;
	t_node	*new_node;

	i = 1;
	while (argv[i])
	{
		if (!is_number(argv[i]) || !ft_atoi_safe(argv[i], &c))
			return (0);
		if (has_duplicate(stack, c))
			return (0);
		new_node = node_new(c);
		if (!new_node)
			return (0);
		stack_add_back(stack, new_node);
		i++;
	}
	return (1);
}
