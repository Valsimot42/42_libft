/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:57:13 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 11:43:53 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This function checks if the character is featured in ASCII table.
 * 
 * @param a The character that is being checked.
 * @return This function returns a character that is found in the ASCII table.
 */
int	ft_isascii(int a)
{
	return (a >= 0 && a <= 127);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii('A'));
// 	printf("%d\n", ft_isascii('1'));
// 	printf("%d\n", ft_isascii(' '));
// 	printf("%d\n", ft_isascii('\0'));
// 	printf("%d\n", ft_isascii('!'));
// 	return (0);
// }