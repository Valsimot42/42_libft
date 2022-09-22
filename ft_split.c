/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:10:32 by tbolkova          #+#    #+#             */
/*   Updated: 2022/09/19 13:16:26 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_str_counter(char const *str, char del)
{
	size_t	counter;

	if (!*str)
		return (0);
	counter = 0;
	while (*str)
	{
		if (*str != del && ((*(str + 1)) == del || (*(str + 1)) == 0))
			counter++;
		str++;
	}
	return (counter);
}

static size_t	ft_wordlen_helper(const char *s, char c)
{
	size_t	word_len;

	if (!ft_strchr(s, c))
		word_len = ft_strlen(s);
	else
		word_len = ft_strchr(s, c) - s;
	return (word_len);
}

/**
 * @brief 
 * 
 * @param s 
 * @param c 
 * @return char** 
 */
char	**ft_split(const char *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	word_len;

	if (!s)
		return (0);
	arr = malloc((ft_str_counter(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = ft_wordlen_helper(s, c);
			arr[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	arr[i] = NULL;
	return (arr);
}
