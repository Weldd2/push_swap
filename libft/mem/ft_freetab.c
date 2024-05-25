/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:02:37 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/19 13:02:50 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_freetab(void **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_free(tab + i);
		i++;
	}
	ft_free((void **) &tab);
}
