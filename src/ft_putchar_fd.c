/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:07:14 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/20 12:44:24 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function writes the character "c" into the file descriptor.
 * 
 * @param c Character that we want to write.
 * @param fd File descriptor.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>

// int main(void)
// {
// 	ft_putchar_fd('a', 1);
// 	printf("\n");
// 	return (0);
// }