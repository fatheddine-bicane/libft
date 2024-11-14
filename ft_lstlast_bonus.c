/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:44:45 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/14 11:20:28 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr_to_last;

	if (!lst)
		return (0);
	ptr_to_last = lst;
	while (ptr_to_last->next != 0)
		ptr_to_last = ptr_to_last->next;
	return (ptr_to_last);
}

