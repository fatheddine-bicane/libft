/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:34:27 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/24 18:07:32 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    int		j;

	i = 0;
    if (needle[i] == 0)
    {
        return ((char *)(&haystack[i]));
    }
    while (haystack[i] != 0 && i < len)
    {
		j = 0;
        if (haystack[i + j] == needle[j] && (i + j) < len)
		{
			while (needle[j] != 0 && haystack[i + j] == needle[j] && (i + j) < len)
				j++;
			if (needle[j] == 0 && (i + j) <len)
				return ((char *)(&haystack[i]));
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main()
{
	const char *str1 = "fatheddine";
	const char *str2 = "dine";
	size_t x = 7;
	printf("%s___", strnstr(str1, str2, x));
	printf("%s", ft_strnstr(str1, str2, x));
}
