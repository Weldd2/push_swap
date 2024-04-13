/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:19:07 by antoinemura       #+#    #+#             */
/*   Updated: 2024/04/13 19:42:41 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/ft_printf.h"
# include "libft/libft.h"

typedef struct s_node
{
	int				content;
	struct s_node	*next;
}	t_node;

void	swap_a(t_node **a);
void	swap_b(t_node **b);
void	swap_ab(t_node **a, t_node **b);
void	push_a(t_node **b, t_node **a);
void	push_b(t_node **b, t_node **a);
void	rotate_a(t_node **a);
void	rotate_b(t_node **b);
void	rrotate_a(t_node **a);
void	rrotate_b(t_node **b);
int		ft_parse_arg(int argc, char **argv, t_node **a);
t_node	*ft_nodenew(int content);
void	ft_nodeadd_front(t_node **lst, t_node *new);
void	ft_printnode(t_node *lst);
int		ft_nodesize(t_node *lst);
void	ft_print_ab(t_node *a, t_node *b);
void	algo(t_node **a, t_node **b);
int		ft_is_sorted(t_node *node);
int		ft_get_last_content(t_node *node);
int		ft_get_max_content(t_node *node);
int		ft_find_place(t_node *node, int content);
int		ft_find_max(t_node *node, int max);
int		ft_abs(int val);

#endif