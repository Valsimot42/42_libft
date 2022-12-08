/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:34:16 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:03:47 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function computes the length of the string "s".
 * 
 * @param s String.
 * @return The function returns the number of characters that
 * precede the terminating NUL character.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
