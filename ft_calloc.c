/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:46:10 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/02 17:59:00 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*row_mm;

	row_mm = (unsigned char *)malloc(count * size);
	if (!row_mm)
		return (0);
	ft_bzero(row_mm, (count * size));
	return (row_mm);
}
