/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:30:41 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/15 20:17:05 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*s_tc;

	i = 0;
	s_tc = ((unsigned char *)(s));
	while (s_tc[i] != c && i < n)
		i++;
	if (s_tc[i] == c && i < n)
		return (&s_tc[i]);
	else
		return (0);
}
