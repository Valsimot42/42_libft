/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:07:53 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:02:15 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * @brief This function allocates sufficient memory for a copy of
 * the string "s1", does the copy, and returns a pointer to it.
 * The pointer may susequently be used as an argument to the function
 * free. If insuffiecient memory is available, NULL is returned and
 * errno is set to ENOMEM.
 * 
 * @param s1 String that is going to be copied.
 * @return Function returns a pointer to the string "s1".
 */
char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		strlen;

	strlen = ft_strlen(s1);
	dest = malloc(strlen + 1);
	if (dest == 0)
		return (0);
	ft_strcpy(dest, (char *)s1);
	return (dest);
}
