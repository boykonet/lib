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

int		ft_atoi(const char *str)
{
	int		flag;
	int		digit;
	int		count;

	flag = 1;
	digit = 0;
	count = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
				|| *str == '\r' || *str == '\f' || *str == '\v'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			flag = -1;
		count++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		if (count++ >= 19 && flag == 1)
			return (-1);
		else if (count > 20 && flag == -1)
			return (0);
		digit = digit * 10 + *str++ - '0';
	}
	return (digit * flag);
}
