/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:05:50 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/25 22:25:11 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s_sub;

	i = 0;
	s_sub = (char *)malloc(sizeof (char) * (len + 1));
	if (!s_sub)
		return (0);
	while (len != 0)
	{
		s_sub[i] = s[start];
		start++;
		i++;
		len--;
	}
	return (s_sub);
}
