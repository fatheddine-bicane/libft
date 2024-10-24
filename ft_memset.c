/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:31:44 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/24 15:16:44 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t	i;

	p = ((unsigned char *)(s));
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

#include <string.h>
#include <stdio.h>

int main()
{
	//void s[20];
	char s[10];
	char s2[10];
	size_t n1 = 11;
	int c = 65;
	size_t n = 11;
	//printf("%s\n", ft_memset(s, c, n));
	printf("%s", memset(s2, c, n1));
}
