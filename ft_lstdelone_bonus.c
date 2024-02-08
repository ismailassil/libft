/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:34:47 by iassil            #+#    #+#             */
/*   Updated: 2023/11/14 17:07:54 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst == NULL || del == NULL)
		return ;
	ptr = lst;
	lst = lst->next;
	del(ptr->content);
	free(ptr);
	ptr = NULL;
}
