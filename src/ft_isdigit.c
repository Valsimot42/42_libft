/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:36:20 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/20 12:43:58 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function checks if the character is a decimal digit.
 * 
 * @param d character that is being checked.
 * @return This function returns non-zero value if the character
 * is a decimal digit, and a zero if it is not a decimal digit.
 */
int	ft_isdigit(int d)
{
	return (d >= 48 && d <= 57);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isdigit('a'));
// 	printf("%d\n", ft_isdigit('A'));
// 	printf("%d\n", ft_isdigit('1'));
// 	printf("%d\n", ft_isdigit(' '));
// 	printf("%d\n", ft_isdigit('\0'));
// 	printf("%d\n", ft_isdigit('!'));
// 	return (0);
// }
