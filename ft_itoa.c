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

int		ft_itoa_count(int n);
char	*ft_itoa_logic(char *dst, int n, int count, int flag);

char	*ft_itoa(int n)
{
	char	*dst;
	int		count;
	int		flag;

	flag = 0;
	if (n == 0)
		return ("0");
	if (n == -2147483648)
	{
		n = n + 1;
		flag = 1;
	}
	count = ft_itoa_count(n);
	dst = (char*)malloc(sizeof(char) * (count + 1));
	ft_itoa_logic(dst, n, count, flag);
	return (dst);
}


int		ft_itoa_count(int n)
{
	int		number;
	int		count;

	count = 0;
	number = n;
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
	return (count);
}

char	*ft_itoa_logic(char *dst, int n, int count, int flag)
{
	char	*d;

	d = &dst[count];
	if (n < 0)
	{
		dst[0] = '-';
		n = n * (-1);
	}
	if (n != 0 && flag == 1)
	{
		dst[--count] = '0' + (n % 10) + 1;
		n = n / 10;
	}
	while (n != 0)
	{
		dst[--count] = '0' + (n % 10);
		n = n / 10;
	}
	*d = '\0';
	return (dst);
}
