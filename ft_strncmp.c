/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:12:55 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:04:43 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function lexicographically compares the
 * null-terminated strings "s1" and "s2". It compares no more
 * than "n" characters. Because it is degisned to compare strings
 * rather than binary data, characters that appear after
 * '\0' character are not compared.
 * 
 * @param s1 String that is compared against "s2".
 * @param s2 String that is compared against "s1".
 * @param n Size of the characters that we wish to compare.
 * @return This function returns an integer greater than, equal to,
 * or less than 0, according as the string "s1" is greater than,
 * equal to, or less than string "s2". The comparison is done using
 * unsigned characters, so that '\200' is greater than '\0'.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
