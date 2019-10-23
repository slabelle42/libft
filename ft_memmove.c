/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:45:14 by slabelle          #+#    #+#             */
/*   Updated: 2019/10/12 15:45:16 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*char_dst;
	char	*char_src;
	size_t	i;

	char_dst = (char *)dst;
	char_src = (char *)src;
	if (dst > src)
	{
		i = 0;
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			char_dst[len] = char_src[len];
		}
	}
	return (dst);
}
