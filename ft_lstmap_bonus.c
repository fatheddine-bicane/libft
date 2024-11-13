/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:29:25 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/13 13:44:44 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_clone;
	
	if (!lst || !f || !del)
		return (0);
	lst_clone = lst;
	while (lst_clone != 0)
		lst_clone = lst_clone->next;
	
	lst_clone = ft_
}