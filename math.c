/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:21:10 by antoinemura       #+#    #+#             */
/*   Updated: 2024/04/13 19:22:09 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int val)
{
	if (val < 0)
		val = -val;
	return (val);
}