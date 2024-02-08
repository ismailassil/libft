/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:44:52 by iassil            #+#    #+#             */
/*   Updated: 2023/11/16 17:35:00 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*ptr;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	size = ft_strlen(s) + 1;
	ptr = (char *)ft_calloc(size, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < (size - 1))
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	return (ptr);
}
