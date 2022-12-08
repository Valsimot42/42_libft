/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:12:35 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:02:25 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function applies function "f" on each character of
 * the string passed as argument, passing its index as first argument.
 * Each character is passed by address to "f" to be modified if necessary.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}	
