/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:09:26 by tbolkova          #+#    #+#             */
/*   Updated: 2022/09/19 13:14:30 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
