/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:08:56 by antoinemura       #+#    #+#             */
/*   Updated: 2024/04/13 18:53:25 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_node **node) {
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

int	ft_find_cheapest_number(t_node **a, __attribute__((unused))t_node **b)
{
	t_node	*current_a;
	// t_node	*current_b;
	int		min_tour;

	current_a = *a;
	// current_b = *b;
	min_tour = 1;

	min_tour = ft_find_place(*b, current_a->content);
	ft_printf("nombre de tours requis : %d (%d rotate + 1 push)\n===\n", min_tour, min_tour - 1);
	while (current_a->next != NULL)
	{
		current_a = current_a->next;
		min_tour = ft_find_place(*b, current_a->content);
		ft_printf("nombre de tours requis : %d (%d rotate + 1 push)\n===\n", min_tour, min_tour - 1);
	}
	return (-1);
}


void	algo(t_node **a, __attribute__((unused))t_node **b)
{
	// ft_print_ab(*a, *b);
	// push_b(b, a);
	// ft_print_ab(*a, *b);
	push_b(b, a);
	push_b(b, a);
	push_b(b, a);
	push_b(b, a);
	
	ft_print_ab(*a, *b);
	ft_find_cheapest_number(a, b);
	// sort_3(a);
}
