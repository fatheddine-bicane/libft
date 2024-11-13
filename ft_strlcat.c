/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:32:54 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/13 18:07:00 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	i;
	size_t	j;

	if (dest == NULL && destsize == 0)
		return (0);
	dest_len = ft_strlen(dest);
	i = dest_len;
	if (dest_len >= destsize)
		return (ft_strlen(src));
	j = 0;
	while (src[j] != 0 && i < destsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest_len + ft_strlen(src));
}
