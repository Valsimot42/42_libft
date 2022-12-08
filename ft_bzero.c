/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:03:36 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 13:52:33 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function writes "n" zeroed bytes to the string "s".
 * If "n" is zero, "ft_bzero" does nothing.
 * 
 * @param s Pointer to the string.
 * @param n Number of bytes we want to fill with zeroes.
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*casted_s;

	i = 0;
	casted_s = (char *)s;
	while (i < n)
	{
		casted_s[i] = 0;
		i++;
	}
}
