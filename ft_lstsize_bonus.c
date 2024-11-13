/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:23:36 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/13 10:36:19 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*lst_cpy;
	int		node_count;

	if (!lst)
		return (0);
	lst_cpy = lst;
	node_count = 0;
	while (lst_cpy != 0)
	{
		lst_cpy = lst_cpy->next;
		node_count++;
	}
	return (node_count);
}
