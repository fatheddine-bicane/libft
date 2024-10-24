/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:30:35 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/24 21:38:26 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_tc;
	const unsigned char	*s2_tc;
	size_t				i;
	

	s1_tc = ((const unsigned char *)(s1));
	s2_tc = ((const unsigned char *)(s2));
	i = 0;
	while (i < n)
	{
		if (s1_tc[i] != s2_tc[i])
			return (s1_tc[i] - s2_tc[i]);
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main()
{
	const char str[] = "fatheddine";
	const char str2[] = "fatheddine";
	size_t x = 12;
	printf("%d  ", memcmp(str, str2, x));
	printf("%d", ft_memcmp(str, str2, x));
}
