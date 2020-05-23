/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 18:29:32 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/08 18:29:32 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				size;
	size_t				lendst;
	size_t				lensrc;

	d = (unsigned char*)dst;
	s = (const unsigned char*)src;
	if (d == NULL || s == NULL)
		return (0);
	size = dstsize;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst >= dstsize)
		return (lensrc + dstsize);
	if (dstsize > lendst)
	{
		d = &d[lendst];
		size = size - lendst;
		while (--size && *s)
			*d++ = *s++;
		*d = '\0';
	}
	if (size == 0)
	{
		if (dstsize != 0)
			*d = '\0';
	}
	return (lensrc + lendst);
}
