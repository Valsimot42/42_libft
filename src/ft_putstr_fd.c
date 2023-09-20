/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:11:04 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/20 12:44:31 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function writes the string "s" into the file descriptor.
 * 
 * @param s String that we want to write.
 * @param fd File descriptor.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write(fd, s, ft_strlen(s));
}

// #include <stdio.h>

// int main(void)
// {
// 	ft_putstr_fd("Hello World!", 1);
// 	return (0);
// }