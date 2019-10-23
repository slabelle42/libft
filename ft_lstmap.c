#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*head;

	if (lst && f && del)
	{
		tmp = f(lst);
		if (!(new = ft_lstnew(tmp->content)))
			return (NULL);
		head = new;
		while (lst->next)
		{
			lst = lst->next;
			tmp = f(lst);
			new = new->next;
			if (!(new = ft_lstnew(tmp->content)))
				return (NULL);
		}
		return (head);
	}
	return (NULL);
}
