/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:17:25 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/10 18:17:25 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*dst;
	char const	*s2;
	size_t		count;
	size_t		i;

	i = 0;
	s2 = &s1[ft_strlen(s1) - 1];
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1 != s2 && (ft_strchr(set, *s1) != NULL))
		s1++;
	while (s2 != s1 && (ft_strrchr(set, *s2) != NULL))
		s2--;
	count = s2 - s1 + 1;
	if ((dst = (char*)malloc(sizeof(char) * (count + 1))) == NULL)
		return (NULL);
	while (count > 0)
	{
		dst[i++] = *s1++;
		count--;
	}
	dst[i] = '\0';
	return (dst);
}
