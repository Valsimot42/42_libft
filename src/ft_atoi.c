/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:59:24 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/20 12:43:38 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

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

// #include <stdio.h>

// int main(void)
// {
// 	char *str1 = "-1234";
// 	char *str2 = "  5  6  7  8";
// 	char *str3 = "9a9b9c";
// 	char *str4 = " \t\n\v\f\r  123 ";
	
// 	printf("\e[0;32mft_atoi: \n\e[0;37m");
// 	printf("%d\n", ft_atoi(str1));
// 	printf("%d\n", ft_atoi(str2));
// 	printf("%d\n", ft_atoi(str3));
// 	printf("%d\n", ft_atoi(str4));

// 	printf("\e[0;31matoi: \n\e[0;37m");
// 	printf("%d\n", atoi(str1));
// 	printf("%d\n", atoi(str2));
// 	printf("%d\n", atoi(str3));
// 	printf("%d\n", atoi(str4));
// 	return (0);
// }