/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:02:44 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/01 20:55:48 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char *)(haystack));
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		if (haystack[i + j] == needle[j] && (i + j) < len)
		{
			while ((needle[j] != 0 && (i + j) < len)
				&& (haystack[i + j] == needle[j])
				&& (haystack[i + j] != 0))
				j++;
		}
		if (needle[j] == 0)
			return ((char *)(&haystack[i]));
		i++;
	}
	return (0);
}
