/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:45:52 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/25 18:42:01 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_tc;
	char	*src_tc;

	dest_tc = ((char *)(dest));
	src_tc = ((char *)(src));
	if (dest_tc <= src_tc)
	{
		while (n != 0)
		{
			*dest_tc = *src_tc;
			dest_tc--;
			src_tc--;
			n--;
		}
	}
	else if (dest_tc > src_tc)
	{
		dest_tc += n - 1;
		src_tc += n - 1;
		while (n != 0)
		{
			*dest_tc = *src_tc;
			dest_tc--;
			src_tc--;
			n--;
		}
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char dest[23];
	char src[] = "fatheddine";
	printf("%s", ft_memmove(dest, src, 9));
	printf("   %s", memmove(dest, src, 9));
}
