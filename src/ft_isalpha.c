/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:33:17 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/20 12:43:54 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function checks if the character is alphabetic.
 * 
 * @param a The character that is being checked.
 * @return This function returns non-zero value if the character
 * is alphabetic, and a zero if it is not alphabetic.
 */
int	ft_isalpha(int a)
{
	return ((a >= 65 && a <= 90) || (a >= 97 && a <= 122));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha('A'));
// 	printf("%d\n", ft_isalpha('1'));
// 	printf("%d\n", ft_isalpha(' '));
// 	printf("%d\n", ft_isalpha('\0'));
// 	printf("%d\n", ft_isalpha('!'));
// 	return (0);
// }
