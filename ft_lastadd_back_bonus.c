/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastadd_back_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:18:14 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/12 16:48:55 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, tlist *new)
{
	t_list	*lst_tmp;

	if (!new)
		return ;
	if (!lst)
		*lst = new;
	lst_tmp = lst;
	lst_tmp = ft_lstlat(lst_tmp);
	lst_tmp->next = new;
}
