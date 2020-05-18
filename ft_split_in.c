/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_in.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 21:22:50 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/12 21:22:50 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split_in(char **dst, char const *s, const char div, size_t ch)
{
	char const	*src;
	size_t		i;
	size_t		count;

	src = s;
	i = 0;
	while (ch >= i && *s != '\0')
	{
		while (*src != div && *src != '\0')
			src++;
		count = src - s;
		dst[i] = (char*)malloc(sizeof(char) * (count + 1));
		if (dst[i] == NULL)
		{
			while (i >= 0)
				free(dst[i--]);
			return (NULL);
		}
		count = 0;
		while (s != src)
			dst[i][count++] = *s++;
		dst[i++][count] = '\0';
		s = ++src;
	}
	return (dst);
}
