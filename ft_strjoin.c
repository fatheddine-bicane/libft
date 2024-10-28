/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:25:38 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/28 13:54:25 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s1_s2;

	s1_s2 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1_s2)
		return (0);
	i = 0;
	j = 0;
	while (*s1 != 0)
	{
		s1_s2[i] = *s1++;
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		s1_s2[i] = s2[j];
		i++;
		j++;
	}
	s1_s2[i] = 0;
	return (s1_s2);
}

#include <stdio.h>

int main()
{
	char str1[] = "fatheddine";
	char str2[] = "naadi";
	printf("%s", ft_strjoin(str1, str2));
}
