/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:44:23 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/28 17:45:21 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		check_tab[255] = {0};
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (set[i] != 0)
	{
		if (check_tab[(unsigned char)set[i]] == 0)
			check_tab[(unsigned char)set[i]] = 1;
		i++;
	}
	i = 0;
	while (s1[i] != 0)
		i++;
	i--;
	while (check_tab[(unsigned char)s1[i]] == 1)
		i--;
	j = i;
	i = 0;
	while (check_tab[(unsigned char)s1[i]] == 1)
		i++;
	str = malloc (j - i + 1);
	int a = 0;
	while (i <= j)
	{
		str[a++] = s1[i++];
	}
	str[a] = 0;
	return (str);
}

#include <stdio.h>

int main()
{
	char str[] = "abcabcfatheddine nadiabcabca";
	printf("%s", ft_strtrim(str, "abc"));
}
