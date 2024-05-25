/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   get_next_line_utils.c							  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: antoinemura <antoinemura@student.42.fr>	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/12/25 23:28:34 by antoinemura	   #+#	#+#			 */
/*   Updated: 2023/12/25 23:46:07 by antoinemura	  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src_cpy;
	unsigned char	*dest_cpy;

	if (src == NULL && dest == NULL)
		return (NULL);
	src_cpy = (unsigned char *)src;
	dest_cpy = (unsigned char *)dest;
	while (n > 0)
	{
		*dest_cpy = *src_cpy;
		dest_cpy++;
		src_cpy++;
		n--;
	}
	return (dest);
}
