/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:38:44 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/12 18:06:22 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_f;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (0);
	s_f = (char *)malloc(ft_strlen(s) + 1);
	if (!s_f)
		return (0);
	while (s[i] != 0)
	{
		s_f[i] = (f)(i, s[i]);
		i++;
	}
	s_f[i] = 0;
	return (s_f);
}
