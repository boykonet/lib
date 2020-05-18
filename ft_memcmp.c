/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 10:50:30 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/06 10:50:30 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		nmb;

	str1 = (const char*)s1;
	str2 = (const char*)s2;
	nmb = n;
	if (nmb == 0)
		return (0);
	else
	{
		while (--nmb && ((*str1 == *str2) != '\0'))
		{
			str1++;
			str2++;
		}
	}
	return (*str1 - *str2);
}
