/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassil <iassil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:25:23 by iassil            #+#    #+#             */
/*   Updated: 2023/11/16 11:45:16 by iassil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static int	ft_sign(const char *str, size_t *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	result;
	long	res1;
	int		sign;

	i = 0;
	result = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	sign = ft_sign(str, &i);
	while (ft_isdigit(str[i]) > 0)
	{
		res1 = (result * 10) + (str[i] - 48);
		if (result > res1 && sign == 1)
			return (-1);
		else if (result > res1 && sign == -1)
			return (0);
		result = res1;
		i++;
	}
	return (result * sign);
}
