/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:49:26 by antoinemura       #+#    #+#             */
/*   Updated: 2023/12/29 17:46:36 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_node **n)
{
	t_node	*last;
	t_node *first;

	if (n == NULL || *n == NULL || (*n)->next == NULL)
		return ;
	first = *n;
	last = *n;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	*n = (*n)->next;
	first->next = NULL;
}

void	rotate_a(t_node **a)
{
	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	rotate(a);
	ft_printf("ra\n");
}

void	rotate_b(t_node **b)
{
	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	rotate(b);
	ft_printf("rb\n");
}

void	rotate_ab(t_node **a, t_node **b)
{
	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
