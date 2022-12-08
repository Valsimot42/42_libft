/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:09:02 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:03:03 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function copies and concarenates strings with the
 * same input parameters and output result as snprintf(3).
 * It takes the full size of the destination buffer and guarantees
 * NUL-termination if there is room. Note that room for the NUL
 * should be included in "dstsize".
 * 
 * @param dst String where the characters will be copied.
 * @param src String from which characters are copied.
 * @param dstsize Size of the elements that will be copied.
 * @return This function returns the total length of the string that
 * was attempted to be created, it this particular case, that means
 * the initial length of "dst" plus the length of "src".
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize == 0 || dstsize <= len_dst)
	{
		return (dstsize + len_src);
	}
	while (i < (dstsize - len_dst - 1) && src[i] != 0)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
