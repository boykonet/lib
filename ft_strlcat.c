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
	char		*d;
	const char	*s;
	size_t		size;
	size_t		lendst;

	d = (char*)dst;
	s = (const char*)src;
	if (d == NULL || s == NULL || (*d == '\0') || (*s == '\0'))
		return (0);
	size = dstsize;
	while (*d++ != '\0')
		size--;
	lendst = d - dst;
	if (lendst >= dstsize)
		return (dstsize);
	while (--size && *s)
		*d++ = *s++;
	if (size == 0)
	{
		if (dstsize != 0)
			*d = '\0';
		while (*s)
			s++;
	}
	return (lendst + s - src);
}
