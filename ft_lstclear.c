/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:45:55 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/13 14:45:55 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*prev;

	if ((*lst) != NULL)
	{
		while ((*lst))
		{
			current = (*lst)->next;
			prev = (*lst);
			while (current != NULL)
			{
				current = current->next;
				prev = prev->next;
			}
			(*del)(prev->content);
			free(prev);
		}
		(*lst) = NULL;
	}
}
