/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_build.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 21:00:11 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/10 21:00:11 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_build(char *dst, int number, int count)
{
	char	*d;

	if (number < 0)
		dst[0] = '-';
	number = number * (-1);
	d = &dst[count];
	while (number != 0)
	{
		dst[--count] = '0' + (number % 10);
		number = number / 10;
	}
	*d = '\0';
	return (dst);
}
