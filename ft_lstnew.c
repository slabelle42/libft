#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
		new->content = NULL;
	else
	{
		if (!(new->content = malloc(sizeof(content))))
			return (NULL);
		ft_memcpy(new->content, content, sizeof(content));
	}
	new->next = NULL;
	return (new);
}
