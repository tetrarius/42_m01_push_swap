/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 12:02:01 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/03 13:21:07 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_init(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->bottom = NULL;
	stack->size = 0;
	return (stack);
}

t_node	*node_new(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = 0;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	stack_add_back(t_stack *stack, t_node *new_node)
{
	if (stack->size == 0)
	{
		stack->top = new_node;
		stack->bottom = new_node;
	}
	else
	{
		stack->bottom->next = new_node;
		new_node->prev = stack->bottom;
		stack->bottom = new_node;
	}
	stack->size++;
}
