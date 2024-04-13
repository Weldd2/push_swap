/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:41:20 by antoinemura       #+#    #+#             */
/*   Updated: 2024/04/13 18:54:22 by antoinemura      ###   ########.fr       */
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

int	ft_is_sorted(t_node *node)
{
	t_node	*current;

	current = node;
	while (current != NULL)
	{
		if (current->next != NULL)
		{
			if (current->next->content < current->content)
				return (0);
		}
		current = current->next;
	}
	return (1);
}

int	ft_get_last_content(t_node *node)
{
	t_node	*current;

	current = node;
	while (current->next != NULL)
		current = current->next;
	return (current->content);
}

int	ft_get_max_content(t_node *node)
{
	t_node	*current;
	int		max_content;

	current = node;
	max_content = -1;
	while (current->next != NULL)
	{
		if (current->content > max_content)
			max_content = current->content;
		current = current->next;
	}
	return (max_content);
}

int	ft_find_place(t_node *node, int content)
{
	t_node	*current;
	int		nb_tour;

	current = node;
	nb_tour = 1;
	ft_printf("Looking for = %d\n", content);
	if (content == current->content)
		return (nb_tour);
	if (content < ft_get_last_content(node) && content > current->content)
		return (nb_tour);
	nb_tour++;
	ft_printf("nb_rotate = %d\n", nb_tour - 1);
	while (current->next != NULL)
	{
		if (content == current->content)
			break;
		if (content < current->content && content > current->next->content)
			break;
		current = current->next;
		nb_tour++;
	}
	if (nb_tour - 1 > ft_nodesize(node)/2)
		nb_tour = nb_tour - ft_nodesize(node)/2;
	return (nb_tour);
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
