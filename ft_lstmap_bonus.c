/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:29:25 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/14 16:34:54 by fbicane          ###   ########.fr       */
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
void	*f(void *str)
{
	int i = 0;
	
	if (!str)
		return (0);
	while (((char *)str)[i] != 0)
	{
		if (((char *)str)[i] >= 'a' && ((char *)str)[i] <='z')
			((char *)str)[i] -= 32;
		i++;
	}
	return ((char *)str);
}

void	del(void *str)
{
	if (!str)
		return ;
	free(str);
}
#include <string.h>
int main()
{
	// void *(*ptr_f)(void *) = (void *(*)(void *))f;
	// void (*ptr_del)(void *) = (void (*)(void *))del;
	
	t_list *head = 0;
	t_list *node;
	node = ft_lstnew(strdup("first"));
	ft_lstadd_back(&head, node);
	node = ft_lstnew(strdup("second"));
	ft_lstadd_back(&head, node);
	node = ft_lstnew(strdup("third"));
	ft_lstadd_back(&head, node);
	node = ft_lstnew(strdup("im the new first node"));;
	ft_lstadd_front(&head, node);
	printf("the list size %d\n", ft_lstsize(head));
	t_list *tmp = head;
	while (tmp)
	{
		
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	t_list *new_list = ft_lstmap(head, f, del);
	t_list *tem = new_list;
	while (tem)
	{
		printf("%s\n", tem->content);
		tem = tem->next;
	}
	ft_lstclear(&new_list, del);
	while (new_list)
	{
		printf("%s\n", new_list->content);
		new_list = new_list->next;
	}
	if (new_list == 0)
		printf("new_list cleared");
}