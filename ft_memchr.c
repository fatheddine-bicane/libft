/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:30:41 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/24 17:04:51 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = ((char *)(s));
	if (c == 0)
		return (&p[0]);
	while (p[i] != c && i < n)
		i++;
	if (p[i] == c && i < n)
		return (&p[i]);
	else
		return (0);
}

#include <string.h>
#include <stdio.h>

int main ()
{
	const char str[20] = "fatheddine";
	int c = 100;
	size_t n = 0;
	printf("%s----", ft_memchr(str, c, n));
	printf("%s", memchr(str, c, n));
}
