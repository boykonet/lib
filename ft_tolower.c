/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 22:46:34 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/02 22:46:34 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 65 && ch <= 90)
		return (ch + 32);
	return (c);
}
