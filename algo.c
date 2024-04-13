/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:08:56 by antoinemura       #+#    #+#             */
/*   Updated: 2024/04/14 00:37:00 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **node) {
	t_node *current;
	
	current = *node;
	while (!(current->content < current->next->content && current->next->content < current->next->next->content))
	{
		current = *node;
		if (current->content > current->next->content && current->next->content > current->next->next->content)
			rotate_a(node);
		else if (current->content < current->next->content && current->next->content > current->next->next->content)
			rrotate_a(node);
		else if (current->content > current->next->content && current->content > current->next->next->content)
			rotate_a(node);
		else if (current->content > current->next->content && current->content < current->next->next->content)
			swap_a(node);
		else if (current->content < current->next->content && current->content > current->next->next->content)
			rrotate_a(node);
		current = *node;
	}
}

t_min_ope	ft_find_cheapest_number(t_node **a, t_node **b)
{
	int			i;
	int			max;
	t_node		*current_a;
	t_min_ope	ope;
	t_min_ope	min_ope;

	min_ope.min = 2147483647;
	current_a = *a;
	max = ft_get_max_content(*b);
	i = 0;
	while (current_a != NULL)
	{
		if (current_a->content > max)
			ope = ft_count_max_move(*b, max, current_a->content, i);
		else
			ope = ft_count_move(*b, current_a->content, i);
		if (ope.min < min_ope.min)
			min_ope = ope;
		ft_printf("%d, %d, %d\n", ope.content, ope.min, ope.raw);
		current_a = current_a->next;
		i++;
	}
	return (min_ope);
}

void	ft_exec_min_ope(t_node **a, t_node **b, t_min_ope min_ope)
{
	t_node	*current_a;

	current_a = *a;
	while (current_a != NULL && current_a->content != min_ope.content)
	{
		// TODO buggué
		rotate_a(a);
		current_a = current_a->next;
	}
	for (int i = 0; i < ft_abs(min_ope.raw); i++)
	{
		if (min_ope.raw > 0)
			rotate_b(b);
		else
			rrotate_b(b);
	}
	push_b(b, a);
}

void	algo(t_node **a, __attribute__((unused))t_node **b)
{
	t_min_ope	min_ope;
	// ft_print_ab(*a, *b);
	// push_b(b, a);
	// ft_print_ab(*a, *b);
	ft_print_ab(*a, *b);

	push_b(b, a);
	push_b(b, a);
	
	ft_print_ab(*a, *b);
	while (ft_nodesize(*a) > 3)
	{
		min_ope = ft_find_cheapest_number(a, b);
		ft_exec_min_ope(a, b, min_ope);
		ft_print_ab(*a, *b);
	}
	// sort_3(a);
}
