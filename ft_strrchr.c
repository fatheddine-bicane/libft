/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:29:11 by fbicane           #+#    #+#             */
/*   Updated: 2024/10/23 16:26:55 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	int	i;
	int	j;

	i = 0;
	if (ch == 0)
	{
		while (str[i] == 0)
		{
			i++;
		}
		j = i;
	}
	while (str[i] != 0)
	{
		if (str[i] == ch)
		{
			j = i;
		}
		i++;
	}
	return ((char *) &str[j]);
}
