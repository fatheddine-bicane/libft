/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:30:41 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/01 13:14:20 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_tc;

	i = 0;
	s_tc = ((char *)(s));
	if (c == 0)
		return (&s_tc[0]);
	while (s_tc[i] != c && i < n)
		i++;
	if (s_tc[i] == c && i < n)
		return (&s_tc[i]);
	else
		return (0);
}
