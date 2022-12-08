/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:47:42 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 13:58:19 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function checks is the character is alphanumeric.
 * 
 * @param a The character that is being checked.
 * @return This function returns non-zero value if the character
 * is alphanumeric, and a zero if it is not alphanumeric.
 */
int	ft_isalnum(int a)
{
	return ((a >= 48 && a <= 57) || (a >= 65 && a <= 90)
		|| (a >= 97 && a <= 122));
}
