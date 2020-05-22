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
	if (dst == NULL || src == NULL)
		return (NULL);
	if (len == 0)
		return (dst);
	if ((char*)dst == (const char*)src)
		return (dst);
	else if ((char*)dst > (const char*)src)
	{
		while (len--)
			*((char*)dst + len) = *((const char*)src + len);
	}
	else
		ft_memcpy((char*)dst, (const char*)src, len + 1);
	return (dst);
}
