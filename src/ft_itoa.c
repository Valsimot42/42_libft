/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:53:11 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 11:49:19 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_itoa_recursive(long n, char *str)
{
	char	c;

	if (n < 0)
	{
		*str++ = '-';
		ft_itoa_recursive(-n, str);
		return ;
	}
	if (n == 0)
	{
		*str++ = '0';
		*str = '\0';
		return ;
	}
	c = n % 10 + '0';
	ft_itoa_recursive(n / 10, str);
	while (n / 10)
	{
		str++;
		n /= 10;
	}
	*str++ = c;
	*str = '\0';
}

/**
 * @brief This function converts integer into null-terminated string.
 * It can convert negative numbers.
 * 
 * @param n Integer that is being converted.
 * @return Returns a string representing the integer received as an argument.
 */
char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_itoa_recursive((long)n, str);
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("\e[0;32mft_itoa:\n\e[0;37m");
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(1));
// 	printf("%s\n", ft_itoa(-1));
// 	printf("%s\n", ft_itoa(10));
// 	printf("%s\n", ft_itoa(-10));
// 	printf("%s\n", ft_itoa(123456789));
// 	printf("%s\n", ft_itoa(-123456789));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// }