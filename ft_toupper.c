/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:34:38 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 14:06:26 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function converts a lower-case letter to the
 * corresponding upper-case letter.
 * 
 * @param c Character that we want to convert.
 * @return If the argument is lower-case letter, the function
 * returns the corresponding upper-case letter if there is one;
 * otherwise, the argument is unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
