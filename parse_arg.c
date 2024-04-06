/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:13:06 by antoinemura       #+#    #+#             */
/*   Updated: 2024/04/07 00:29:27 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_custom(const char *nptr, int *is_valid)
{
	int	signe;
	int	total;

	signe = 1;
	total = 0;
	*is_valid = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signe = -signe;
		nptr++;
	}
	while (*nptr <= '9' && *nptr >= '0')
	{
		total = total * 10;
		total += (*nptr - '0');
		nptr++;
	}
	if (*nptr != '\0')
		*is_valid = 0;
	return (total * signe);
}

int	ft_parse_arg(int argc, char **argv, t_node **a)
{
	int		i;
	int		val;
	int		is_valid;

	if (argc <= 1)
		return (0);
	i = argc - 1;
	while (i >= 1)
	{
		val = ft_atoi_custom(argv[i], &is_valid);
		if (!is_valid)
			return (0);
		ft_nodeadd_front(a, ft_nodenew(val));
		i--;
	}
	return (1);
}
