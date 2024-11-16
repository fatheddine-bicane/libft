#include "libft.h"

	void *map_func(void *content)
	{
		char *str = (char *)content;
		int len = ft_strlen(str);
		char *new_str = malloc((len + 1) * sizeof(char));
		strcpy(new_str, str);
		new_str[0] = ft_toupper(new_str[0]);
		return new_str;
	}
int main()
{
	// Create a linked list
	t_list *lst = ft_lstnew("Hello");
	ft_lstadd_back(&lst, ft_lstnew("World"));
	ft_lstadd_back(&lst, ft_lstnew("Copilot"));

	// Define a function to apply to each element

	// Apply the function to each element of the list
	t_list *new_lst = ft_lstmap(lst, map_func, free);

	// Print the new list
	t_list *curr = new_lst;
	while (curr != NULL)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}

	// Free the memory
	ft_lstclear(&lst, free);
	ft_lstclear(&new_lst, free);

	return 0;
}