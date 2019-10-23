/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:42:02 by slabelle          #+#    #+#             */
/*   Updated: 2019/10/12 15:42:07 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*uchar_s1;
	unsigned char	*uchar_s2;

	uchar_s1 = (unsigned char *)s1;
	uchar_s2 = (unsigned char *)s2;
	while (*uchar_s1 && *uchar_s1 == *uchar_s2 && len-- > 0)
	{
		uchar_s1++;
		uchar_s2++;
	}
	return (*uchar_s1 - *uchar_s2);
}
