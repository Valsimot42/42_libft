/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:09:12 by tbolkova          #+#    #+#             */
/*   Updated: 2022/09/22 12:58:26 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc) and returns a substring from the string "s".
 * The substring begins at index "start" and is of maximum size "len".
 * 
 * @param s The string from which to create the substring
 * @param start The start of index of the substring in the string "s".
 * @param len The maximum length of the substring.
 * @return It returns the substring, NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	total_len;

	if (!s)
		return (NULL);
	if (!len || start >= (ft_strlen(s)))
		return (ft_strdup(""));
	substr = malloc(len * sizeof(char) + 1);
	if (substr == 0)
		return (NULL);
	total_len = start + len;
	i = 0;
	while (start < total_len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = 0;
	return (substr);
}
