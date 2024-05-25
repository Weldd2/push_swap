/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:22:37 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/18 14:50:22 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_bin_to_int(char *s)
{
	int	ite;
	int	res;
	int	temp;

	res = 0;
	ite = 7;
	while (ite >= 0)
	{
		temp = *(s + 7 - ite) - '0';
		res += temp * ft_pow(2, ite);
		ite--;
	}
	return (res);
}
