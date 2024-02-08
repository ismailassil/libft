/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:24:38 by iassil            #+#    #+#             */
/*   Updated: 2023/11/16 11:10:43 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*current;
	t_list	*new_list;

	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	current = NULL;
	new_list = NULL;
	ptr = lst;
	while (ptr != NULL)
	{
		current = ft_lstnew(NULL);
		if (current == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		current->content = f(ptr->content);
		ft_lstadd_back(&new_list, current);
		ptr = ptr->next;
	}
	return (new_list);
}
