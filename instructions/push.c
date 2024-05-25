/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:21:38 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/25 16:03:13 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_node **n1, t_node **n2)
{
	t_node	*temp;

	if (n2 && *n2)
	{
		temp = *n2;
		*n2 = (*n2)->next;
		temp->next = *n1;
		*n1 = temp;
	}
}

void	push_a(t_node **a, t_node **b)
{
	if (b && *b)
	{
		push(a, b);
		ft_printf("pa\n");
	}
}

void	push_b(t_node **b, t_node **a)
{
	if (a && *a)
	{
		push(b, a);
		ft_printf("pb\n");
	}
}
