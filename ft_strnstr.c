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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lenght;
	size_t	ch;

	lenght = ft_strlen(needle) - 1;
	ch = 0;
	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (*haystack == '\0')
		return (NULL);
	if (len == 0 || *needle == '\0')
		return ((char*)haystack);
	while (len && (haystack[ch] != '\0'))
	{
		if ((ft_memcmp(&haystack[ch], needle, lenght)) == 0)
			return ((char*)&haystack[ch]);
		else
		{
			ch++;
			len--;
		}
	}
	return (NULL);
}
