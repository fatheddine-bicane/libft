/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:56:56 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/06 20:36:35 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if (s[i] != 0 && s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

static char	**arr_str_all(char const *s, char **arr_s, char c, int words)
{
	int	i;
	int	len;
	char const *index;

	i = 0;
	while (i < words)
	{
		len = 0;
		while (*s == c)
			s++;
		index = s;
		while (*s != c && *s != 0)
		{
			s++;
			len++;
		}
		arr_s[i] = malloc(len + 1);
		if (!arr_s[i])
			return (0);
		ft_strncpy(arr_s[i], index, len);
		i++;
	}
	arr_s[i] = 0;
	return (arr_s);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_s;
	int		words;

	words = ft_count_words(s, c);
	arr_s = malloc((words + 1)* sizeof(char *));
	if (!arr_s)
		return (0);
	arr_s = arr_str_all(s, arr_s, c, words);
	return (arr_s);
}

int main()
{
	char *str = "  test1  test2 test3  f  ";
	char **arr = ft_split(str, 32);
	int i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
