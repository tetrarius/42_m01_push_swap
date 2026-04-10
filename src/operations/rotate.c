/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 10:50:25 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/10 11:18:54 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	t_node	*first;

	if (!a || a->size < 2)
		return ;
	first = a->top;
	a->top = first->next;
	a->top->prev = NULL;
	first->next = NULL;
	first->prev = a->bottom;
	a->bottom->next = first;
	a->bottom = first;
}

void	rra(t_stack *a)
{
	t_node	*last;

	if (!a || a->size < 2)
		return ;
	last = a->bottom;
	a->bottom = last->prev;
	a->bottom->next = NULL;
	last->prev = NULL;
	last->next = a->top;
	a->top->prev = last;
	a->top = last;
}
