/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:59:24 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 13:52:12 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int ch)
{
	if (ch == ' ')
		return (1);
	else if (ch == '\f' || ch == '\n' || ch == '\r' || ch == '\t' || ch == '\v')
		return (1);
	return (0);
}

/**
 * @brief This function converts the string argument "str" to an integer.
 * 
 * 
 * @param str Pointer to the string.
 * @return This function returns the converted integral number as an int value.
 * If no valid conversion could be performed, it returns zero.
 */
int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (sign * result);
}
