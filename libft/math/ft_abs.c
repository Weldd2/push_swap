/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:04:20 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/25 16:04:22 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int val)
{
	if (val < 0)
		val = -val;
	return (val);
}