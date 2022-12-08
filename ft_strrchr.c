/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:18:02 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:05:31 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function locates the last occurrence of "c"
 * (converted to a "char") in the string pointed to by "s".
 * The terminating null character is considered to be part of
 * the string.
 * 
 * @param s Pointer to the string.
 * @param c Character that we are looking for in "s".
 * @return The function returns a pointer to the located character,
 * or NULL if the character does not appear in the string.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			ptr = (char *)&s[i];
			return (ptr);
		}
		i--;
	}
	return (0);
}
