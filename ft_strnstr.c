/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 14:07:55 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/05 14:07:55 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnstr_logic(const char *haystack, const char *needle, size_t l)
{
	const char		*h;
	const char		*n;
	size_t			len;

	h = haystack;
	n = needle;
	while (l && *h != '\0')
	{
		h = haystack;
		n = needle;
		len = l;
		while (len && ((ft_memcmp(h, n, 1)) == 0) && *h != '\0' && *n != '\0')
		{
			h++;
			n++;
			len--;
		}
		if (*n == '\0')
			return ((char*)haystack);
		haystack++;
		l--;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char		*h;
	const char		*n;

	h = haystack;
	n = needle;
	if (h == NULL || n == NULL || (!h && !n))
		return (NULL);
	if (len == 0 || *n == '\0')
		return ((char*)h);
	if ((h = ft_strnstr_logic(haystack, needle, len)) != NULL)
		return ((char*)h);
	return (NULL);
}
