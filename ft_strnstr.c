/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:09:50 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:05:09 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function locates the first occurance of the
 * null-terminated string "ned" in the string "hay", where not
 * more than "len" characters are searched. Characters that
 * appear after a '\0' character are not searched. 
 * 
 * @param hay Null-terminated string in which we are looking for "ned".
 * @param ned Null-terminated string.
 * @param len Size of characters that will be searched.
 * @return If "ned" is an empty string, "hay" is returned; if "ned"
 * occurs nowhere in "hay", NULL is returned; otherwise a pointer to
 * the first character of the first occurance of "ned" is returned.
 */
char	*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	size_t	i;
	size_t	ned_len;

	i = 0;
	ned_len = ft_strlen(ned);
	if (ned[0] == 0)
		return ((char *)hay);
	while ((hay[i] != 0) && ((i + ned_len) <= len))
	{
		if (ft_strncmp(hay + i, ned, ned_len) == 0)
			return ((char *)&hay[i]);
		i++;
	}
	return (NULL);
}
