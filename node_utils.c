/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:41:20 by antoinemura       #+#    #+#             */
/*   Updated: 2023/12/29 18:45:15 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printnode(t_node *lst)
{
	t_node	*current;

	if (!lst)
		return ;
	current = lst;
	while (current != NULL)
	{
		ft_printf("%d\n", current->content);
		current = current->next;
	}
	return ;
}

void	ft_print_ab(t_node *a, t_node *b)
{
	t_node	*current_a;
	t_node	*current_b;

	ft_printf("=========\n");
	current_a = a;
	current_b = b;
	while (current_a != NULL || current_b != NULL)
	{
		if (current_a != NULL)
		{
			ft_printf("%d", current_a->content);
			current_a = current_a->next;
		}
		ft_printf("\t");
		if (current_b != NULL)
		{
			ft_printf("%d", current_b->content);
			current_b = current_b->next;
		}
		ft_printf("\n");
	}
	ft_printf("_\t_\n");
	ft_printf("a\tb\n=========\n");
}
