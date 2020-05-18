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
	size_t		i;

	i = 0;
	if (len == 0 || dst == NULL || src == NULL)
		return (0);
	if ((char*)dst == (const char*)src)
		return (dst);
	else if ((char*)dst > (const char*)src)
	{
		while (len--)
			*((char*)dst + len) = *((const char*)src + len);
	}
	else
	{
		return (ft_memcpy(dst, src, len + 1));
	}
	return (dst);
}
