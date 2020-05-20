/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:32:54 by gkarina           #+#    #+#             */
/*   Updated: 2020/04/29 18:32:54 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_in(const char *str, int flag, int count);

int		ft_atoi(const char *str)
{
	int		flag;
	int		digit;
	int		count;

	flag = 1;
	count = 0;
	if (str == NULL)
		return (0);
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
				|| *str == '\r' || *str == '\f' || *str == '\v'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			flag = -1;
		count++;
	}
	digit = ft_atoi_in(str, flag, count);
	return (digit * flag);
}

int		ft_atoi_in(const char *str, int flag, int count)
{
	int		digit;

	digit = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		if (count++ >= 19 && flag == 1)
			return (-1);
		else if (count > 20 && flag == -1)
			return (0);
		digit = digit * 10 + *str++ - '0';
	}
	return (digit);
}