/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:19:07 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/25 16:00:22 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_node
{
	int				content;
	struct s_node	*next;
}	t_node;

typedef struct s_min_operation {
	int	content;
	int	min;
	int	raw;
}	t_min_ope;

void		swap_a(t_node **a);
void		swap_b(t_node **b);
void		swap_ab(t_node **a, t_node **b);
void		push_a(t_node **b, t_node **a);
void		push_b(t_node **b, t_node **a);
void		rotate_a(t_node **a);
void		rotate_b(t_node **b);
void		rrotate_a(t_node **a);
void		rrotate_b(t_node **b);
int			ft_parse_arg(int argc, char **argv, t_node **a);
t_node		*ft_nodenew(int content);
void		ft_nodeadd_front(t_node **lst, t_node *new);
void		ft_printnode(t_node *lst);
int			ft_nodesize(t_node *lst);
void		ft_print_ab(t_node *a, t_node *b);
void		algo(t_node **a, t_node **b);
int			ft_is_sorted(t_node *node);
int			ft_get_last_content(t_node *node);
int			ft_get_max_content(t_node *node);
int			ft_get_min_content(t_node *node);
t_min_ope	ft_count_move(t_node *node, int content, int index);
t_min_ope	ft_count_max_move(t_node *node, int max, int content, int index);
t_min_ope	ft_count_min_move(t_node *node, int min, int content, int index);
int			ft_abs(int val);

#endif