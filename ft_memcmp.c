/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:05:13 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 13:59:54 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function compares byte string "s1" against byte string "s2".
 * Both strings are assumed to be "n" bytes long.
 * 
 * @param s1 String that we are comparing with.
 * @param s2 String that we are comparing against.
 * @param n Size of both strings.
 * @return This function returns "zero" if the two strings are identical,
 * otherwise it returns the difference between the first two differing bytes
 * (treated as unsigned char values).
 * Zero-length strings are always identical.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*casted_s1;
	unsigned char	*casted_s2;

	i = 0;
	casted_s1 = (unsigned char *)s1;
	casted_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (casted_s1[i] != casted_s2[i])
		{
			return ((unsigned char)casted_s1[i] - (unsigned char)casted_s2[i]);
		}
		i++;
	}
	return (0);
}
