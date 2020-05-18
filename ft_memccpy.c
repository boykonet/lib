/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 18:46:08 by gkarina           #+#    #+#             */
/*   Updated: 2020/04/30 18:46:08 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*dst2;
	const unsigned char		*src2;
	unsigned char			ch;

	dst2 = (unsigned char*)dst;
	src2 = (const unsigned char*)src;
	ch = (unsigned char)c;
	if (src2 == NULL || n == 0)
		return (NULL);
	while (n--)
	{
		*dst2++ = *src2;
		if (*src2 == ch)
			return (NULL);
		src2++;
	}
	return (dst);
}
