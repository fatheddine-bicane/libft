/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:31:44 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/05 17:41:18 by fbicane          ###   ########.fr       */
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

int main()
{
	int nb = 4114124;
	ft_memset(&nb, 57, 1);
	ft_memset((char *)&nb + 1, 5, 1);
	ft_memset((char *) &nb + 2, 0, 2);
	printf("%d", nb);
}
