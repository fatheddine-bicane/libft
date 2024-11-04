/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:09:17 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/04 20:28:05 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_strrev(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[j] != 0)
		j++;
	j--;
	while (j >= 0)
	{
		str2[i] = str1[j];
		i++;
		j--;
	}
	str2[i] = 0;
	return (str2);
}

static int	ft_int_length(long n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_int_reversed(int n)
{
	long	tmp_n;
	int		i;
	int		j;
	char	*int_str;

	j = 0;
	i = 0;
	tmp_n = n;
	int_str = malloc(ft_int_length(tmp_n) + 1);
	if (!int_str)
		return (0);
	if (tmp_n < 0)
		tmp_n *= -1;
	while (tmp_n > 0)
	{
		int_str[j] = tmp_n % 10 + 48;
		tmp_n = tmp_n / 10;
		j++;
	}
	if (n < 0)
		int_str[j++] = '-';
	int_str[j] = 0;
	return (int_str);
}

char	*ft_itoa(int n)
{
	char	*n_str;
	int		i;

	if (n == 0)
	{
		i = 0;
		n_str = malloc(2);
		n_str[i] = 48;
		i++;
		n_str[i] = 0;
		return (n_str);
	}
	n_str = malloc(ft_int_length(n) + 1);
	if (!n_str)
		return (0);
	ft_strrev(ft_int_reversed(n), n_str);
	return (n_str);
}
