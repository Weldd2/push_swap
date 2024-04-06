/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:39:45 by antoinemura       #+#    #+#             */
/*   Updated: 2023/12/29 17:47:06 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrotate(t_node **n)
{
	t_node	*last;
	t_node	*second_last;
	t_node *first;

	if (n == NULL || *n == NULL || (*n)->next == NULL)
		return ;
	first = *n;
	last = *n;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	if (second_last != NULL)
		second_last->next = NULL;
	last->next = first;
	*n = last;
}

void	rrotate_a(t_node **a)
{
	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	rrotate(a);
	ft_printf("rra\n");
}

void	rrotate_b(t_node **b)
{
	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	rrotate(b);
	ft_printf("rrb\n");
}

void	rrotate_ab(t_node **a, t_node **b)
{
	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	rrotate(a);
	rrotate(b);
	ft_printf("rrr\n");
}
