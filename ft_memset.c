/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:10:24 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:00:35 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function writes "len" bytes of value "c"
 * (conversted to an unsigned char) to the string "b"
 * 
 * @param b String.
 * @param c Element that we want to write into string.
 * @param len Size of bytes we want to write into string.
 * @return This function returns its first argument.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*casted_b;
	unsigned char	converted_c;

	i = 0;
	casted_b = (char *)b;
	converted_c = c;
	while (i < len)
	{
		casted_b[i] = converted_c;
		i++;
	}
	return (casted_b);
}
