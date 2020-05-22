/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 00:21:05 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/02 00:21:05 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		size;
	size_t		lenght;

	d = (char*)dst;
	s = (const char*)src;
	size = dstsize;
	if (s == NULL || d == NULL)
		return (0);
	lenght = ft_strlen(s);
	if (size > 0)
	{
		while (size >= 0 && *s != '\0')
		{
			*d++ = *s++;
			size--;
		}
	}
	if (size == 0)
	{
		if (dstsize != 0)
			*d = '\0';
	}
	return (lenght);
}
