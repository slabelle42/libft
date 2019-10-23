#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (*lst && lst && del)
	{
		tmp1 = *lst;
		while (tmp1)
		{
			tmp2 = tmp1;
			tmp1 = tmp1->next;
			del(tmp2->content);
			free(tmp2);
			tmp2 = NULL;
		}
	}
}
