/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:50:08 by slabelle          #+#    #+#             */
/*   Updated: 2019/10/24 16:05:39 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

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
