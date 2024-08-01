/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:17:11 by tbolkova          #+#    #+#             */
/*   Updated: 2024/08/01 13:10:46 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function applies the function "f" on each character of
 * the string passed as argument, passing its index as first argument.
 * Each character is passed by address to "f" to be modified if necessary.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return None.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)malloc(1 * (ft_strlen(s)) + 1);
	if (!s)
		return (NULL);
	if (str == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
