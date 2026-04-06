/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:25:02 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/06 17:41:23 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *stack, char *name)
{
	t_node	*current;

	current = stack->top;
	printf("%s:\n", name);
	while (current)
	{
		printf("%d\n", current->value);
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	(void)argc;
	a = stack_init();
	b = stack_init();
	if (!a || !b)
		return (1);
	if (!build_stack_from_args(a, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	print_stack(a, "A before");
	print_stack(b, "B before");
	pb(a, b);
	printf("------ after pb ------\n");
	print_stack(a, "A after");
	print_stack(b, "B after");
	stack_free(a);
	stack_free(b);
	return (0);
}
