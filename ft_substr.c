/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:33:46 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/10 16:33:46 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*src;
	char		*dst;
	size_t		size;
	size_t		count;

	count = 0;
	src = s;
	size = len;
	if (src == NULL || len == 0 || *src == '\0')
		return (NULL);
	while (start-- && *src != '\0')
		src++;
	if (*src == '\0')
		return (NULL);
	s = src;
	while (size-- && *src++)
		count++;
	if ((dst = (char*)malloc(sizeof(char) * (count + 1))) == NULL)
		return (NULL);
	count = 0;
	while (len--)
		dst[count++] = *s++;
	dst[count] = '\0';
	return (dst);
}
