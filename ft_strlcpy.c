/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:12:00 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:03:34 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function copes and concatenates strings with
 * the same input parameters and output result as snprintf(3).
 * It takes the full size of the destination buffer and guarantees
 * NUL-termination if there is room. Note that room for the NUL
 * should be included in "dstsize". It copies up to "dstsize -1"
 * characters from the string "src" to "dst", NUL-terminating the
 * result if "dstsize" is not 0.
 * 
 * @param dst String where the characters will be copied.
 * @param src String from which characters are copied.
 * @param dstsize Size of the elements that will be copied.
 * @return This function returns the total length of the string
 * that was attempted to be created, it this particular case,
 * the length of "src".
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != 0)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != 0)
	{
		i++;
	}
	return (i);
}
