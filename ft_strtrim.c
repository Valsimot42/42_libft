/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:22:26 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:05:41 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function allocates (with malloc) and returns a
 * copy of "str" with the characters specified in "set" removed
 * from the beginning and the end of the string.
 * 
 * @param str The string to be trimmed.
 * @param set The reference set of characters to trim.
 * @return The trimmed string, NULL if allocation fails.
 */
static size_t	ft_get_start(char const *str, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (ft_strchr(set, str[i]) == 0)
			return (i);
		i++;
	}
	return (i);
}

static size_t	ft_get_end(char const *str, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (ft_strchr(set, str[len - i - 1]) == 0)
			return (len - i);
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	trimmed = malloc(end - start + 1 * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 1);
	return (trimmed);
}
