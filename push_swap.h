/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 10:56:37 by aravakia          #+#    #+#             */
/*   Updated: 2026/04/15 15:16:17 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node		*top;
	t_node		*bottom;
	int			size;
}	t_stack;

t_stack	*stack_init(void);
t_node	*node_new(int value);
void	stack_add_back(t_stack *stack, t_node *new_node);
void	stack_free(t_stack *stack);
int		is_number(char *str);
int		is_number(char *str);
int		ft_atoi_safe(char *str, int *out);
int		build_stack_from_args(t_stack *stack, char **argv);
int		has_duplicate(t_stack *stack, int value);
int		is_sorted(t_stack *stack);
void	sa(t_stack *a);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rra(t_stack *a);
void	sort_2(t_stack *a);
void	sort_3(t_stack *a);
t_node	*find_min(t_stack *a);
void	move_min_to_top(t_stack *a);
int		get_position(t_stack *a, t_node *target);
void	sort_5(t_stack *a, t_stack *b);
void	assign_index(t_stack *a);
void	radix_sort(t_stack *a, t_stack *b);
void	simple_sort(t_stack *a, t_stack *b);
double	compute_disorder(t_stack *a);

#endif
