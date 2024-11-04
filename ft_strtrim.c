/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:44:23 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/04 20:22:50 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		check_tab[255];
	int		i;
	int		j;
	char	*str;

	ft_memset(check_tab, 0, sizeof(check_tab));
	i = 0;
	while (set[i] != 0)
	{
		if (check_tab[(unsigned char)set[i]] == 0)
			check_tab[(unsigned char)set[i]] = 1;
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (check_tab[(unsigned char)s1[i]] == 1)
		i--;
	j = i;
	i = 0;
	while (check_tab[(unsigned char)s1[i]] == 1)
		i++;
	str = malloc (j - i + 1);
	ft_memcpy(str, s1 + i, j - i + 1);
	return (str);
}
