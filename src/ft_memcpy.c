/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:09:18 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/20 12:44:15 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function copies "n" bytes from memory area "src" to memory
 * area "dst". If "dst" and "src" overlap, behavior is undefined.
 * 
 * @param dst Memory area where bytes will be copied to.
 * @param src Memory area from which bytes are copied.
 * @param n Size of bytes that will be copied.
 * @return This function returns the original value of "dst".
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*casted_dst;
	char	*casted_src;

	i = 0;
	casted_dst = (char *)dst;
	casted_src = (char *)src;
	if (n == 0 || (!casted_src && !casted_dst))
		return (dst);
	while (i < n)
	{
		casted_dst[i] = casted_src[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "Hello World!";
// 	char str2[] = "Hello World!";
// 	ft_memcpy(str, str + 6, 6);
// 	printf("\e[0;32mft_memcpy:\e[0;37m %s\n", str);
// 	memcpy(str2, str2 + 6, 6);
// 	printf("\e[0;31mmemcpy:\e[0;37m %s\n", str2);
// 	return (0);
// }