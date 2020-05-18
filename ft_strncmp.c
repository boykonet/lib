/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:51:41 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/03 21:51:41 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		len;

	len = n;
	if (len == 0)
		return (0);
	else
	{
		while (--len && ((*s1 == *s2) != '\0'))
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}
