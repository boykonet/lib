/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 21:55:36 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/05 21:55:36 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	char			*str;

	ch = (unsigned char)c;
	str = (char*)s;
	if (str == NULL || *str == '\0')
		return (NULL);
	while (*str != '\0')
	{
		if (*str == ch)
			return (str);
		str++;
	}
	return (NULL);
}