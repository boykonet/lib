/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 19:14:48 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/04 19:14:48 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*str;
	unsigned char	c;
	size_t			i;
	size_t			j;

	j = 0;
	c = 0;
	i = count * size;
	if (i == 0)
	{
		if ((str = malloc(1)) == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if ((str = malloc(i)) == NULL)
		return (NULL);
	while (--i)
	{
		str[j++] = c;
	}
	str[j] = c;
	return ((void*)str);
}
