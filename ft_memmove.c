/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:39:34 by iassil            #+#    #+#             */
/*   Updated: 2023/11/16 16:33:15 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*ds;
	const char	*sr;

	ds = (char *)dst;
	sr = (const char *)src;
	i = len - 1;
	if (ds > sr)
	{
		while (i >= 0)
		{
			ds[i] = sr[i];
			i--;
		}
	}
	else 
		ft_memcpy(dst, src, len);
	return (dst);
}
