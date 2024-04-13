/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 08:59:47 by antoinemura       #+#    #+#             */
/*   Updated: 2024/04/13 17:55:43 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	if (argc == 1)
		return (0);
	a = NULL;
	b = NULL;
	if (!ft_parse_arg(argc, argv, &a))
	{
		write(STDERR_FILENO, "Error\n", 7);
		return (0);
	}
	// ft_print_ab(a, b);
	algo(&a, &b);
	// ft_printf("%d\n", is_sorted(a));
	// ft_print_ab(a, b);
	return (0);
}
