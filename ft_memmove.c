/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:45:52 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/16 10:19:28 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_tc;
	unsigned char	*src_tc;
	int				i;

	if (n == 0)
		return (dest);
	dest_tc = ((unsigned char *)(dest));
	src_tc = ((unsigned char *)(src));
	if (dest_tc <= src_tc)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	else if (dest_tc > src_tc)
	{
		i = n -1;
		while (i >= 0)
		{
			dest_tc[i] = src_tc[i];
			i--;
		}
	}
	return (dest);
}
