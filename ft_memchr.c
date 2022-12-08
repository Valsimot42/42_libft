/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:18:51 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 13:59:36 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function locates the first occurance of "c"
 * (converted to an unsigned char) in string "s".
 * 
 * @param s String.
 * @param c Character that we are looking for in the string.
 * @param n Size of the bytes function will check for character "c".
 * @return Function returns a pointer to the byte located, or NULL if
 * no such byte exists within "n" bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*casted_s;
	unsigned char	converted_c;

	i = 0;
	casted_s = (unsigned char *)s;
	converted_c = c;
	while (i < n)
	{
		if (casted_s[i] == converted_c)
			return (&casted_s[i]);
	i++;
	}
	return (NULL);
}
