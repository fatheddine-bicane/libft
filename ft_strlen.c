/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:55:02 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/24 19:09:19 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
