/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:39:36 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:06:13 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function converts an upper-case letter to the
 * correseponding lower-case letter.
 * 
 * @param c Character that we want to convert.
 * @return If the argument is an upper-case letter, function
 * returns the corresponding lower-case letter if there is one;
 * otherwise, the argument is unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
