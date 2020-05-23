/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 14:05:45 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/12 14:05:45 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	t_list	*prev;

	current = (*lst)->next;
	prev = (*lst);
	if (new != NULL)
	{
		if (current == NULL)
			prev->next = new;
		else
		{
			while (current != NULL)
			{
				current = current->next;
				prev = prev->next;
			}
			prev->next = new;
		}
	}
}
