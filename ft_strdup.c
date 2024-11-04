/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:29:11 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/03 14:33:19 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_dup;

	s1_dup = (char *)malloc((ft_strlen(s1) + 1));
	if (!s1_dup)
		return (0);
	ft_strlcpy(s1_dup, s1, (ft_strlen(s1) + 1));
	return (s1_dup);
}
