/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:30:35 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/04 21:36:28 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
