/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 19:13:05 by gkarina           #+#    #+#             */
/*   Updated: 2020/04/29 19:13:05 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*m;
	unsigned char	s;

	m = b;
	s = (unsigned char)c;
	if (m == NULL)
		return (NULL);
	while (--len)
		*m++ = s;
	return (b);
}
