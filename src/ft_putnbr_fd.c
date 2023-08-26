/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:09:26 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 12:25:14 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This function outputs the integer "n" to the given file descriptor.
 * 
 * @param n Integer that we want to output.
 * @param fd File descriptor.
 */
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nn;

	if (n >= 0)
		nn = (unsigned int)n;
	else
	{
		ft_putchar_fd('-', fd);
		nn = n * -1;
	}
	if (nn > 9)
	{
		ft_putnbr_fd(nn / 10, fd);
		ft_putchar_fd(nn % 10 + 48, fd);
	}
	else
		ft_putchar_fd(nn % 10 + 48, fd);
}

// #include <stdio.h>

// int main(void)
// {
// 	ft_putnbr_fd(123, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-123, 1);
// 	printf("\n");
// 	ft_putnbr_fd(0, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-2147483648, 1);
// 	printf("\n");
// 	ft_putnbr_fd(2147483647, 1);
// 	printf("\n");
// 	return (0);
// }