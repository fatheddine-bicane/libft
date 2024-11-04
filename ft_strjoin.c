/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:25:38 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/04 14:41:20 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s1_s2;

	if (!s1 || !s2)
		return (0);
	s1_s2 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1_s2)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	ft_memcpy(s1_s2, s1, i);
	ft_strlcat(s1_s2 + i, s2, j);
	return (s1_s2);
}
