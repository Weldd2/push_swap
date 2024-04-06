/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   op.c											   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: antoinemura <antoinemura@student.42.fr>	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/12/26 09:05:19 by antoinemura	   #+#	#+#			 */
/*   Updated: 2023/12/26 09:34:06 by antoinemura	  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_node **n)
{
	t_node	*temp;

	temp = *n;
	*n = (*n)->next;
	temp->next = (*n)->next;
	(*n)->next = temp;
}

void	swap_a(t_node **a)
{
	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	swap(a);
	ft_printf("sa\n");
}

void	swap_b(t_node **b)
{
	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	swap(b);
	ft_printf("sb\n");
}

void	swap_ab(t_node **a, t_node **b)
{
	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
