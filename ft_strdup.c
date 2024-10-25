/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:29:11 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/25 22:04:46 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_strdup(const char *s1)
{
	size_t			i;
	char			*s1_dup;
	
	i = 0;
	while (s1[i])
		i++;
	s1_dup = (char *)malloc(sizeof (char) * (i + 1));
	if (!s1_dup)
		return (0);
	i = 0;
	while (s1[i])
	{
		s1_dup[i] = s1[i];
		i++;
	}
	s1_dup[i] = 0;
	return (&s1_dup[0]);
}

#include <stdio.h>
#include <string.h>
int main()
{
	const char str[] = "fatheddine";
	printf("%s", ft_strdup(str));
	printf("     %s", strdup(str));
}
