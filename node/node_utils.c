/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:41:20 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/25 16:03:30 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

int	ft_get_min_content(t_node *node)
{
	t_node	*current;
	int		min_content;

	current = node;
	min_content = -1;
	while (current->next != NULL)
	{
		if (current->content < min_content)
			min_content = current->content;
		current = current->next;
	}
	return (min_content);
}

int	ft_reverse_rotate(t_node *node, int nb_rotate)
{
	if (nb_rotate > ft_nodesize(node)/2)
		nb_rotate = (nb_rotate - ft_nodesize(node)/2)* -1;
	return (nb_rotate);
}

t_min_ope	ft_count_max_move(t_node *node, int max, int content, int index)
{
	t_node		*current;
	t_min_ope	min_ope;

	current = node;
	min_ope.raw = 0;
	min_ope.content = content;
	min_ope.min = 0;
	min_ope.raw = 0;
	while (current->next != NULL)
	{
		if (current->content == max)
		{
			current = current->next;
			while (current != NULL && current->content == max)
			{
				current = current->next;
				min_ope.raw++;
			}
			min_ope.raw = ft_reverse_rotate(node, min_ope.raw);
			return (min_ope.min = abs(min_ope.raw) + index, min_ope);
		}
		current = current->next;
		min_ope.raw++;
	}
	return (min_ope);
}

t_min_ope	ft_count_min_move(t_node *node, int min, int content, int index)
{
	t_node		*current;
	t_min_ope	min_ope;

	current = node;
	min_ope.raw = 0;
	min_ope.content = content;
	min_ope.min = 0;
	min_ope.raw = 0;
	while (current->next != NULL)
	{
		if (current->content == min)
		{
			current = current->next;
			while (current != NULL && current->content == min)
			{
				current = current->next;
				min_ope.raw++;
			}
			min_ope.raw = ft_reverse_rotate(node, min_ope.raw);
			return (min_ope.min = abs(min_ope.raw) + index, min_ope);
		}
		current = current->next;
		min_ope.raw++;
	}
	return (min_ope);
}

t_min_ope	ft_count_move(t_node *node, int content, int index)
{
	t_min_ope	min_ope;
	t_node		*current;

	current = node;
	min_ope.content = content;
	min_ope.min = 0;
	min_ope.raw = 0;
	if (content == current->content)
		return (min_ope);
	if (content < ft_get_last_content(node) && content > current->content)
		return (min_ope);
	min_ope.raw++;
	while (current->next != NULL)
	{
		if (content == current->content)
			break;
		if (content < current->content && content > current->next->content)
			break;
		current = current->next;
		min_ope.raw++;
	}
	min_ope.raw = ft_reverse_rotate(node, min_ope.raw);
	return (min_ope.min = abs(min_ope.raw) + index, min_ope);
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
