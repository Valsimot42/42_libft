/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:08:15 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/20 12:44:26 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function writes the string "s" into the file descriptor
 * followed by a "newline" (\n).
 * 
 * @param s String that we want to write.
 * @param fd File descriptor.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}

// #include <stdio.h>

// int main(void)
// {
// 	ft_putendl_fd("Hello World!", 1);
// 	return (0);
// }