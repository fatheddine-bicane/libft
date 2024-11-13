/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:17:48 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/13 19:13:14 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_flag;

	if (!lst || !del)
		return ;
	while (*lst != 0)
	{
		lst_flag = (*lst)->next;
		ft_delone(*lst, del);
		lst = lst_flag;
	}
	free(*lst);
	*lst = 0;
}
