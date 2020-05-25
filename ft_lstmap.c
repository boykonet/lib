/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkarina <gkarina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:49:00 by gkarina           #+#    #+#             */
/*   Updated: 2020/05/13 14:49:00 by gkarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*current;
	t_list	*node;
	void	*new_content;

	current = lst;
	result = NULL;
	while (current != NULL)
	{
		new_content = (*f)(current->content);
		node = ft_lstnew(new_content);
		ft_lstadd_back(&result, node);
		if (del)
			(*del)(current->content);
		current = current->next;
	}
	return (result);
}
