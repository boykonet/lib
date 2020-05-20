/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 21:12:15 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/10 21:12:15 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	len;

	if (s == NULL || *s == '\0')
		return (NULL);
	len = ft_strlen(s);
	dst = (char*)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	len = 0;
	while (s[len] != '\0')
	{
		dst[len] = (*f)(len, s[len]);
		len++;
	}
	dst[len] = '\0';
	return (dst);
}
