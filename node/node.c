/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:49:33 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/25 16:03:30 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_nodeadd_front(t_node **lst, t_node *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

t_node	*ft_nodenew(int content)
{
	t_node	*r;

	r = malloc(sizeof(t_node));
	if (!r)
		return (NULL);
	r->content = content;
	r->next = NULL;
	return (r);
}

int	ft_nodesize(t_node *lst)
{
	int		count;
	t_node	*current;

	count = 0;
	if (!lst)
		return (0);
	current = lst;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
