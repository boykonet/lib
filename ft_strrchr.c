/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 22:42:47 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/05 22:42:47 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*str;

	ch = (unsigned char)c;
	str = (char*)s;
	if (str == NULL || *str == '\0')
		return (NULL);
	if (str != NULL && *str != '\0')
	{
		while (*str != '\0')
		{
			if (*str == ch)
				s = (const char*)str;
			str++;
		}
	}
	if (*str == '\0' && ch == '\0')
		return (str);
	else if (*str == '\0' && *s == ch)
		return ((char*)s);
	return (NULL);
}
