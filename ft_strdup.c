/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 14:59:36 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/04 14:59:36 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dupl;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dupl = (char*)malloc(sizeof(char) * (i + 1));
	if (!dupl)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		dupl[i] = s1[i];
		i++;
	}
	dupl[i] = '\0';
	return (dupl);
}
