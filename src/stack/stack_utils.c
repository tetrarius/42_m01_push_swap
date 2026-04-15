/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:15:04 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/15 11:13:02 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_node	*current;

	if (!stack || !stack->top)
		return (1);
	current = stack->top;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

t_node	*find_min(t_stack *a)
{
	t_node	*min;
	t_node	*current;

	if (!a || !a->top)
		return (NULL);
	min = a->top;
	current = a->top->next;
	while (current)
	{
		if (current->value < min->value)
			min = current;
		current = current->next;
	}
	return min;
}
