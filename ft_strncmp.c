/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:51:35 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/14 13:59:08 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (str1 == NULL && n == 0)
		return (0);
	i = 0;
	while ((str1[i] != 0 || str2[i] != 0) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
int main ()
{
	printf("%d", strncmp(NULL,NULL,2));
}