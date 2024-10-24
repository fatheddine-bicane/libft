/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:45:52 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/24 19:17:50 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_tc;
	char	*src_tc;
	size_t	i;

	dest_tc = ((char *)(dest));
	src_tc = ((char *)(src));
	i = 0;
	while (src_tc[i] != 0)
	{
		if (&src_tc[i] == &dest_tc[x])
		{
			
		}
	}
}
