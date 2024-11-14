/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:29:25 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/14 14:40:12 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_clone;
	t_list	*new_lst;

	if (!lst || !f || !del)
		return (0);
		new_lst = 0;
	while (lst != 0)
	{
		lst_clone = ft_lstnew((*f)(lst->content));
		if (!lst_clone)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, lst_clone);
		lst = lst ->next;
	}
	return (new_lst);
}
char	*f(char *str)
{
	int i = 0;
	
	if (!str)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <='z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

void	del(char *str)
{
	if (!str)
		return ;
	free(str);
}

int main()
{
	t_list *head = 0;
	t_list *node;
	node = ft_lstnew("first");
	ft_lstadd_back(&head, node);
	node = ft_lstnew("secod");
	ft_lstadd_back(&head, node);
	node = ft_lstnew("third");
	ft_lstadd_back(&head, node);
	node = ft_lstnew("im the new first node");;
	ft_lstadd_front(&head, node);
	printf("the list size %d\n", ft_lstsize(head));
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}