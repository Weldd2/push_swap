/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:08:56 by antoinemura       #+#    #+#             */
/*   Updated: 2024/04/13 20:07:06 by antoinemura      ###   ########.fr       */
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

int	ft_find_cheapest_number(t_node **a, t_node **b)
{
	t_node	*current_a;
	int		index_a;
	int		max;
	int		min_tour;
	int		content_min_tour;
	int		nb_tour;

	current_a = *a;
	index_a = 0;
	max = ft_get_max_content(*b);
	while (current_a != NULL)
	{
		if (current_a->content > max)
			nb_tour = ft_abs(ft_find_max(*b, max)) + index_a;
		else
			nb_tour = ft_abs(ft_find_place(*b, current_a->content)) + index_a;
		if (index_a == 0 || nb_tour < min_tour)
		{
			min_tour = nb_tour;
			content_min_tour = current_a->content;
		}
		current_a = current_a->next;
		index_a++;
	}
	ft_printf("Le plus petit nombre de rotate est %d pour le nombre %d.\n", min_tour, content_min_tour);

	
	return (min_tour);
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
