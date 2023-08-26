/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:23:57 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 12:29:45 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This function locates the first occurrence of c
 * (converted to a char) in the string pointed to by "s".
 * The terminating null character is considered to be part
 * of the string; therefore if "c" is '\0', the fucntions
 * locate the terminating '\0'.
 * 
 * @param s Pointer to the string.
 * @param c Element that we are looking for in the string.
 * @return This function returns a pointer to the located character,
 * or NULL if the character does not appear in the string.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != 0 && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

#include <stdio.h>

int main(void)
{
	char str[] = "Hello World!";
	printf("\e[0;32mft_strchr:\e[0;37m %s\n", ft_strchr(str, 'o'));
	printf("\e[0;31mstrchr:\e[0;37m %s\n", strchr(str, 'o'));
	return (0);
}