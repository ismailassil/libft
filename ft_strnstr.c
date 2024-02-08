/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:55:49 by iassil            #+#    #+#             */
/*   Updated: 2023/12/05 15:10:57 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	index;

	i = 0;
	if ((haystack == NULL || needle == NULL) && len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		index = i;
		while (haystack[index] == needle[j] && needle[j] != '\0' && index < len)
		{
			if (index > len)
				return (NULL);
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
			index++;
		}
		i++;
	}
	return (0);
}
