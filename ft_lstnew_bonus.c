/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:49:27 by slabelle          #+#    #+#             */
/*   Updated: 2019/11/01 20:27:40 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

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
