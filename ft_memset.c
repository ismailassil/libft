/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:27:27 by iassil            #+#    #+#             */
/*   Updated: 2023/11/16 16:33:17 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*ptr;

	i = 0;
	ch = (unsigned char)c;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = ch;
		i++;
	}
	return (b);
}
