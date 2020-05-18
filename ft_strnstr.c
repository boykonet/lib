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
	size_t	ch;

	ch = 0;
	if (len == 0 || (char*)haystack == NULL || (char*)needle == NULL)
		return (0);
	if (*needle == '\0')
		return ((char*)haystack);
	while (len && (haystack[ch] != '\0'))
	{
		if ((ft_strncmp(&haystack[ch], needle, ft_strlen(needle))) == 0)
			return ((char*)&haystack[ch]);
		else
		{
			ch++;
			len--;
		}
	}
	return (NULL);
}
