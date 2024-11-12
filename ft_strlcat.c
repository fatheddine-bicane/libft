/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:32:54 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/11 19:10:33 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_strlcat(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
	
}

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen_strlcat(dest);
	i = dest_len;
	if (dest_len >= destsize)
		return (ft_strlen_strlcat(src));
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
