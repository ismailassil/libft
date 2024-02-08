/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:07:42 by iassil            #+#    #+#             */
/*   Updated: 2023/11/14 16:50:14 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)str + len);
		len--;
	}
	return (0);
}
