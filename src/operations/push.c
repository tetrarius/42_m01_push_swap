/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 17:22:47 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/06 17:40:02 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (!a || a->size == 0)
		return ;
	tmp = a->top;
	a->top = tmp->next;
	if (a->top)
		a->top->prev = NULL;
	else
		a->bottom = NULL;
	a->size--;
	tmp->next = b->top;
	if (b->top)
		b->top->prev = tmp;
	else
		b->bottom = tmp;
	tmp->prev = NULL;
	b->top = tmp;
	b->size++;
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (!b || b->size == 0)
		return ;
	tmp = b->top;
	b->top = tmp->next;
	if (b->top)
		b->top->prev = NULL;
	else
		b->bottom = NULL;
	b->size--;
	tmp->next = a->top;
	if (a->top)
		a->top->prev = tmp;
	else
		a->bottom = tmp;
	tmp->prev = NULL;
	a->top = tmp;
	a->size++;
}
