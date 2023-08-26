/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:10:24 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 12:22:40 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This function writes "len" bytes of value "c"
 * (conversted to an unsigned char) to the string "b"
 * 
 * @param b String.
 * @param c Element that we want to write into string.
 * @param len Size of bytes we want to write into string.
 * @return This function returns its first argument.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*casted_b;
	unsigned char	converted_c;

	i = 0;
	casted_b = (char *)b;
	converted_c = c;
	while (i < len)
	{
		casted_b[i] = converted_c;
		i++;
	}
	return (casted_b);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "Hello World!";
// 	ft_memset(str, 'a', 3);
// 	printf("\e[0;32mft_memset:\e[0;37m %s\n", str);
// 	memset(str, 'a', 3);
// 	printf("\e[0;31mmemset:\e[0;37m %s\n", str);
// 	return (0);
// }