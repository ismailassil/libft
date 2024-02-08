/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:21:52 by iassil            #+#    #+#             */
/*   Updated: 2023/11/14 16:40:35 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*sr;
	unsigned char		*ds;

	i = 0;
	sr = (unsigned const char *)src;
	ds = (unsigned char *)dst;
	if (ds == NULL && sr == NULL)
		return (NULL);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
