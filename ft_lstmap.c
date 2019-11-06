/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:50:08 by slabelle          #+#    #+#             */
/*   Updated: 2019/11/01 20:52:07 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (lst && f && del)
	{
		new = NULL;
		while (lst)
		{
			if (!(tmp = ft_lstnew((*f)(lst->content))))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			ft_lstadd_back(&new, tmp);
			lst = lst->next;
		}
		return (new);
	}
	return (NULL);
}
