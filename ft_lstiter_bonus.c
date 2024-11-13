/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:29:11 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/13 11:21:17 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_cpy;
	if (!lst || !f)
		return ;
	lst_cpy = lst;
	while (lst_cpy != 0)
	{
		(*f)(lst_cpy->content);
		lst_cpy = lst_cpy->next;
	}
}
