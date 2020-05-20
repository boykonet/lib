/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 23:57:23 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/01 23:57:23 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	const char		*str;
	size_t			nmb;

	ch = (unsigned char)c;
	str = (const char*)s;
	nmb = n;
	if (str == NULL)
		return (NULL);
	if (nmb == 0)
		return (0);
	else
	{
		while (--nmb)
		{
			if (*str != '\0')
			{
				if (*str == ch)
					return ((void*)str);
				str++;
			}
			if (nmb != 0 && *str == '\0')
				return ((void*)str);
		}
	}
	return (0);
}
