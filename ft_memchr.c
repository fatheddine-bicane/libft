/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:30:41 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/16 11:41:19 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tc;
	size_t			i;

	i = 0;
	s_tc = ((unsigned char *)(s));
	while (i < n)
	{
		if (s_tc[i] == (unsigned char)c)
			return (&s_tc[i]);
		i++;
	}
	return (0);
}
