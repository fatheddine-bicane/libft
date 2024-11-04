/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:31:44 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/01 13:18:04 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_tc;
	size_t			i;

	s_tc = ((unsigned char *)(s));
	i = 0;
	while (i < n)
	{
		s_tc[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
