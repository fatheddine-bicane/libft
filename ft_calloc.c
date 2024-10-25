/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:46:10 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/25 21:28:33 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*row_mm;
	unsigned char	*p_row_mm;
	size_t			i;

	i = 0;
	row_mm = (unsigned char *)malloc(count * size);
	if (!row_mm)
		return (0);
	p_row_mm = row_mm;
	while (i < count * size)
		row_mm[i++] = 0;
	return (p_row_mm);
}
