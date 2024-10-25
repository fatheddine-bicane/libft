/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:25:38 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/25 22:44:47 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdib.h>
#include <stddef.h>
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1_s2;
	size_t	i;
	char	s1_s2;

	size_s1_s2 = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	s1_s2 = (char *)malloc(sizeof (char) * (size_s1_s2 + 1));
	if (!s1_s2)
		return (0);
	while (s1[i] != 0)
	{
		
	}
}
