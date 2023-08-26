/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:05:13 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 11:58:53 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This function compares byte string "s1" against byte string "s2".
 * Both strings are assumed to be "n" bytes long.
 * 
 * @param s1 String that we are comparing with.
 * @param s2 String that we are comparing against.
 * @param n Size of both strings.
 * @return This function returns "zero" if the two strings are identical,
 * otherwise it returns the difference between the first two differing bytes
 * (treated as unsigned char values).
 * Zero-length strings are always identical.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*casted_s1;
	unsigned char	*casted_s2;

	i = 0;
	casted_s1 = (unsigned char *)s1;
	casted_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (casted_s1[i] != casted_s2[i])
		{
			return ((unsigned char)casted_s1[i] - (unsigned char)casted_s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "Hello World!";
// 	char str2[] = "Hello World!";
// 	char str3[] = "Hello!";
// 	printf("\e[0;32mft_memcmp: \n\e[0;37m");
// 	printf("%d\n", ft_memcmp(str1, str2, 5));
// 	printf("%d\n", ft_memcmp(str1, str2, 10));
// 	printf("%d\n", ft_memcmp(str1, str3, 5));
// 	printf("%d\n", ft_memcmp(str1, str3, 10));

// 	printf("\e[0;31mmemcmp: \n\e[0;37m");
// 	printf("%d\n", memcmp(str1, str2, 5));
// 	printf("%d\n", memcmp(str1, str2, 10));
// 	printf("%d\n", memcmp(str1, str3, 5));
// 	printf("%d\n", memcmp(str1, str3, 10));
// }
