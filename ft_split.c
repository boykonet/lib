/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:44:11 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/10 18:44:11 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_chrcnt(const char *s, const char c)
{
	const char	*str;
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	if (s[i] == '\0')
		return (++count);
	while (s[i] != '\0')
	{
		str = s;
		count++;
		while (s[i] != c)
			i++;
		while (s[i] == c)
			i++;
	}
	return (count);
}

static char		**ft_split_in(char **d, char const *s, const char v, size_t ch)
{
	char const	*src;
	size_t		i;
	size_t		count;

	src = s;
	i = 0;
	while (ch >= i && *s != '\0')
	{
		if (*src != v && *src != '\0')
		{
			while (*src != v && *src != '\0')
				src++;
			count = src - s;
			if ((d[i] = (char*)malloc(sizeof(char) * (count + 1))) == NULL)
			{
				while (i >= 0)
					free(d[--i]);
				return (NULL);
			}
			count = 0;
			while (s != src)
				d[i][count++] = *s++;
			d[i++][count] = '\0';
		}
		s = ++src;
	}
	d[i] = NULL;
	return (d);
}

char			**ft_split(char const *s, char c)
{
	char		**dst;
	size_t		ch;

	if (s == NULL)
		return (0);
	ch = ft_chrcnt(s, c);
	dst = (char**)malloc(sizeof(char*) * (ch + 1));
	if (dst == NULL)
		return (NULL);
	if ((dst = ft_split_in(dst, s, c, ch)) && dst == NULL)
		return (NULL);
	return (dst);
}
