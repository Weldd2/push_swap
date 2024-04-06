/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 10:08:56 by antoinemura       #+#    #+#             */
/*   Updated: 2024/04/07 00:30:24 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node *a)
{
	t_node	*current;

	if (a == NULL)
		return (0);
	current = a;
	while (current != NULL)
	{
		if (current->next && current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}

static int max_number(t_node *a)
{
	int max;

	max = a->content;
	while (a)
	{
		if (a->content > max)
			max = a->content;
		a = a->next;
	}
	return (max);
}

// Cette fonction calcule le nombre de bits nécessaires pour représenter le nombre maximum.
static int max_bits(int max_num)
{
	int bits;

	bits = 0;
	while ((max_num >> bits) != 0)
		bits++;
	return (bits);
}

// Implémentation de l'algorithme Radix Sort.
void radix_sort(t_node **a, t_node **b)
{
	int max_num = max_number(*a);
	int bits = max_bits(max_num);
	int size;
	int i, j;

	size = ft_nodesize(*a);
	for (i = 0; i < bits; i++) {
		int rotation_count = 0;
		for (j = 0; j < size; j++) {
			if ((((*a)->content >> i) & 1) == 0) {
				push_b(b, a);
			} else {
				rotate_a(a);
				rotation_count++;
			}
		}
		while (rotation_count-- > 0)
			rrotate_a(a);
		while (*b != NULL)
			push_a(a, b);
	}
}




// Assurez-vous d'ajouter radix_sort à la fonction algo.
void algo(t_node **a, t_node **b)
{
	if (!is_sorted(*a))
		radix_sort(a, b);
}