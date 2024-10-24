/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:05:18 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/24 19:18:46 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 	= ((char *)(dest));
	src2		= ((char *)(src));
	while (src2[i] != 0 && i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (&dest[0]);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20];
	char *str2 ="fatheddine";
	size_t x = 20;
	printf("%s", ft_memcpy(str1, str2, x));
	printf("%s", memcpy(str1, str2, x));
}
