/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:16:47 by iassil            #+#    #+#             */
/*   Updated: 2023/11/16 17:35:35 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1) + 1;
	ptr = (char *)malloc(size);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, size);
	return (ptr);
}
