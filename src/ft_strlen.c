/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:34:16 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/20 12:44:52 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function computes the length of the string "s".
 * 
 * @param s String.
 * @return The function returns the number of characters that
 * precede the terminating NUL character.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "Hello World!";
// 	printf("\e[0;32mft_strlen:\e[0;37m %zu\n", ft_strlen(str));
// 	printf("\e[0;31mstrlen:\e[0;37m %zu\n", strlen(str));
// 	return (0);
// }