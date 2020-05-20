/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:56:20 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/10 17:56:20 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	strlen1;
	size_t	strlen2;
	size_t	count;

	strlen1 = ft_strlen(s1);
	strlen2 = ft_strlen(s2);
	count = 0;
	if (s1 == NULL || s2 == NULL || (*s1 == '\0') || (*s2 == '\0'))
		return (NULL);
	dst = (char*)malloc(sizeof(char) + (strlen1 + strlen2 + 1));
	while (*s1 || *s2)
	{
		while (*s1)
			dst[count++] = *s1++;
		while (*s2)
			dst[count++] = *s2++;
	}
	dst[count] = '\0';
	return (dst);
}