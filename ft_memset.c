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
	char			*str;
	unsigned char	ch;

	str = (char*)b;
	ch = (unsigned char)c;
	if (str == NULL)
		return (NULL);
	while (--len)
		*str++ = ch;
	return (b);
}
