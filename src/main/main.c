/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:25:02 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/15 15:23:54 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	double	d;

	if (argc < 2)
		return (0);
	a = stack_init();
	b = stack_init();
	if (!a || !b)
		return (1);
	if (!build_stack_from_args(a, argv))
	{
		write(2, "Error\n", 6);
		stack_free(a);
		stack_free(b);
		return (1);
	}
	d = compute_disorder(a);
	printf("disorder = %f\n", d);
	stack_free(a);
	stack_free(b);
	return (0);
}
