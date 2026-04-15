/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:13:59 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/15 15:15:19 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	compute_disorder(t_stack *a)
{
	t_node	*i;
	t_node	*j;
	int		inv;
	int		total;

	if (!a || a->size < 2)
		return (0.0);
	inv = 0;
	total = a->size * (a->size - 1) / 2;
	i = a->top;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->value > j->value)
				inv++;
			j = j->next;
		}
		i = i->next;
	}
	return ((double)inv / total);
}
