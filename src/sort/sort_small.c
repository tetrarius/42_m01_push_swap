/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 11:29:18 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/15 11:51:43 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	if (a->top->value > a->top->next->value)
		sa(a);
}

void	sort_3(t_stack *a)
{
	int	x;
	int	y;
	int	z;

	if (!a || a->size < 3)
		return ;
	x = a->top->value;
	y = a->top->next->value;
	z = a->bottom->value;
	if (x < y && y < z)
		return ;
	else if (x < z && z < y)
		(sa(a), ra(a));
	else if (y < x && x < z)
		sa(a);
	else if (z < x && x < y)
		rra(a);
	else if (y < z && z < x)
		ra(a);
	else
		(sa(a), rra(a));
}

void	move_min_to_top(t_stack *a)
{
	t_node	*min;
	int		pos;
	int		size;

	if (!a || a->size < 2)
		return ;
	min = find_min(a);
	pos = get_position(a, min);
	size = a->size;
	if (pos <= size / 2)
	{
		while (a->top != min)
			ra(a);
	}
	else
	{
		while (a->top != min)
			rra(a);
	}
}

int	get_position(t_stack *a, t_node *target)
{
	t_node	*current;
	int		pos;

	if (!a || !target)
		return (-1);
	current = a->top;
	pos = 0;
	while (current)
	{
		if (current == target)
			return (pos);
		current = current->next;
		pos++;
	}
	return (-1);
}

void	sort_5(t_stack *a, t_stack *b)
{
	if (!a || a->size < 2)
		return ;
	while (a->size > 3)
	{
		move_min_to_top(a);
		pb(a, b);
	}
	sort_3(a);
	while (b->size > 0)
		pa(a, b);
}
