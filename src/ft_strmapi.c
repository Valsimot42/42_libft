/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:17:11 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 12:42:30 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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

// #include <stdio.h>

// char	ft_print(unsigned int i, char c)
// {
// 	printf("%d: %c\n", i, c);
// 	return (c);
// }

// int main(void)
// {
// 	char str[] = "Hello World!";
// 	printf("\e[0;32mft_strmapi:\e[0;37m %s\n", ft_strmapi(str, ft_print));
// 	return (0);
// }