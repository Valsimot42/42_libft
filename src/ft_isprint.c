/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:03:03 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 11:44:47 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This function checks for any printable character.
 * 
 * @param p The character that is being checked.
 * @return This function returns a non-zero character if the
 * test is true, or a zero if it is false.
 */
int	ft_isprint(int p)
{
	return (p >= 32 && p <= 126);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_isprint('a'));
// 	printf("%d\n", ft_isprint('A'));
// 	printf("%d\n", ft_isprint('1'));
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint('\0'));
// 	printf("%d\n", ft_isprint('!'));
// 	return (0);
// }
