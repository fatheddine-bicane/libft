/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:31:44 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/14 16:06:01 by fbicane          ###   ########.fr       */
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
	int n = 1337;
	int nb = 9334040;
	char *ptr = (char *)&n;
	char *p = (char *)&nb;
	int i = 0;
	while (i < 4)
	{
		ft_memset(p + i, *ptr, 1);
		i++;
		ptr++;
	}
	printf("%d", n);

}
