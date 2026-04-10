/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 11:29:18 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/10 12:53:42 by aravakia         ###   ########.fr       */
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

	if (!a || a->size < 2)
		return ;
	x = a->top->value;
	y = a->top->next->value;
	z = a->bottom->value;
	if (x < y && y < z)
		return ;
	else if (x < z && z < y)
	{
		sa(a);
		ra(a);
	}
	else if (y < x && x < z)
		sa(a);
	else if (z < x && x < y)
		rra(a);
	else if (y < z && z < x)
		ra(a);
	else
	{
		sa(a);
		rra(a);
	}
}
