/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:07:28 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 12:20:13 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This function copies "len" bytes from string "src" to
 * string "dst".
 * The two strings may overlap; the copy is always done in a
 * non-destructive manner.
 * 
 * @param dst Memory area where bytes will be copied to.
 * @param src Memory area from which bytes are copied.
 * @param len Size of bytes that will be copied.
 * @return This function returns the original value of "dst".
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*casted_dst;
	char	*casted_src;

	casted_dst = (char *)dst;
	casted_src = (char *)src;
	if (len == 0 || (!casted_dst && !casted_src))
		return (dst);
	if (src < dst)
	{
		while (len--)
		{
			(casted_dst[len] = casted_src[len]);
		}
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}

#include <stdio.h>

int main(void)
{
	char str[] = "Hello World!";
	char str2[] = "Hello World!";
	ft_memmove(str, str + 8, 6);
	printf("\e[0;32mft_memmove:\e[0;37m %s\n", str);
	memmove(str2, str2 + 8, 6);
	printf("\e[0;31mmemmove:\e[0;37m %s\n", str2);
	return (0);
}