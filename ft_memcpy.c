/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:59:30 by gkarina           #+#    #+#             */
/*   Updated: 2020/04/30 14:59:30 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		sz;

	d = (char*)dst;
	s = (const char*)src;
	sz = n;
	if (d == NULL || s == NULL)
		return (NULL);
	if (sz == 0)
		return (dst);
	while (sz)
	{
		*d++ = *s++;
		sz--;
	}
	return (dst);
}
