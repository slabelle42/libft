/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:45:32 by slabelle          #+#    #+#             */
/*   Updated: 2019/10/24 15:50:56 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_split_getword(char const *s, char c)
{
	int		wrd_len;
	char	*wrd;
	int		i;

	wrd_len = 0;
	while (s[wrd_len] && s[wrd_len] != c)
		wrd_len++;
	if (!(wrd = malloc(sizeof(char) * (wrd_len + 1))))
		return (NULL);
	i = 0;
	while (i < wrd_len)
	{
		wrd[i] = s[i];
		i++;
	}
	wrd[i] = '\0';
	return (wrd);
}

int		ft_split_getcount(const char *s, char c)
{
	int		wrds_cnt;
	int		i;

	if (s)
	{
		wrds_cnt = 1;
		i = 0;
		while (s[i])
		{
			if (s[i] == c && s[i + 1])
				wrds_cnt++;
			i++;
		}
		return (wrds_cnt);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		wrds_cnt;
	char	**wrds;
	int		i;

	wrds_cnt = ft_split_getcount(s, c);
	if (!(wrds = malloc(sizeof(char *) * (wrds_cnt + 1))))
		return (NULL);
	i = 0;
	while (*s && i < wrds_cnt)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			wrds[i] = ft_split_getword(s, c);
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	wrds[i] = NULL;
	return (wrds);
}
