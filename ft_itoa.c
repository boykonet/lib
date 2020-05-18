/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:03:18 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/10 19:03:18 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_build(char *dst, int number, int count);

char	*ft_itoa(int n)
{
	char	*dst;
	int		count;
	int		number;

	count = 0;
	number = 1;
	if (n == 0)
		return ('0');
	if (n < 0)
	{
		number = n * (-1);
		count++;
	}
	while (number != 0)
	{
		number = number / 10;
		count++;
	}
	dst = (char*)malloc(sizeof(char) * (count + 1));
	ft_itoa_build(dst, n, count);
	return (dst);
}

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
