/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:29:25 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/13 20:16:51 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_clone;
	t_list	*new_lst;
	
	if (!lst || !f || !del)
		return (0);

	while (lst != 0)
	{
		lst_clone = ft_lstnew((*f)(lst->content));
		if (!lst_clone)
		{
			ft_lstclear(&new_lst, del);
			retuen (0);
		}
		ft_lstadd_back(&new_lst, lst_clone);
		lst = lst ->next;
	}
	return (new_lst);
}

int main()
{
	
}