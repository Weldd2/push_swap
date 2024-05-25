/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:45:50 by antoinemura       #+#    #+#             */
/*   Updated: 2024/05/18 15:51:25 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

int		ft_bin_to_int(char *s);
int		ft_atoi_base(char *nbr, char *base);
char	*ft_itoa(int n);
int		ft_atoi(const char *nptr);

#endif