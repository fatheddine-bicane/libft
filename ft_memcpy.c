/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:05:18 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/14 09:21:20 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_tc;
	unsigned char	*src_tc;

	i = 0;
	dest_tc = ((unsigned char *)(dest));
	src_tc = ((unsigned char *)(src));
	while (src_tc[i] != 0 && i < n)
	{
		dest_tc[i] = src_tc[i];
		i++;
	}
	return (dest);
}
