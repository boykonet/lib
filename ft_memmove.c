/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:42:36 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/01 20:42:36 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
//	size_t		i;

	d = (char*)dst;
	s = (const char*)src;
//	i = 0;
	if (len == 0)
		return (dst);
	if (d == NULL || s == NULL)
		return (NULL);
	if (d == s)
		return (dst);
	else if (d > s)
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	else
	{
		ft_memcpy(dst, src, len + 1);
	}
	return (dst);
}
