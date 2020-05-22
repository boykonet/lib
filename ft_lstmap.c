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
	t_list	*current;
	t_list	*result;
	void	*new_content;
	
	current = lst;
	while (current != NULL)
	{
		new_content = (*f)(current->content);
		result = ft_lstnew(new_content);
		/*ft_lstadd_back();*/
		if (del != NULL)
			(*del)(current->content);
		current = current->next;
	}
	return (lst);
}
