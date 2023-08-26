/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:47:42 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 11:42:07 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This function checks is the character is alphanumeric.
 * 
 * @param a The character that is being checked.
 * @return This function returns non-zero value if the character
 * is alphanumeric, and a zero if it is not alphanumeric.
 */
int	ft_isalnum(int a)
{
	return ((a >= 48 && a <= 57) || (a >= 65 && a <= 90)
		|| (a >= 97 && a <= 122));
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('1'));
// 	printf("%d\n", ft_isalnum(' '));
// 	printf("%d\n", ft_isalnum('\0'));
// 	printf("%d\n", ft_isalnum('!'));
// 	return (0);
// }