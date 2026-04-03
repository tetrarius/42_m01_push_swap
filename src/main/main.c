/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:25:02 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/03 16:31:49 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		c;
	t_stack	*stack;
	t_node	*current;

	(void)argc;
	stack = stack_init();
	if (!stack)
		return (1);
	i = 1;
	while (argv[i])
	{
		c = atoi(argv[i]);
		stack_add_back(stack, node_new(c));
		i++;
	}
	current = stack->top;
	while (current)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
	stack_free(stack);
	return (0);
}
