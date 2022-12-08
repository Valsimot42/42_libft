/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:36:20 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 13:58:52 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function checks if the character is a decimal digit.
 * 
 * @param d character that is being checked.
 * @return This function returns non-zero value if the character
 * is a decimal digit, and a zero if it is not a decimal digit.
 */
int	ft_isdigit(int d)
{
	return (d >= 48 && d <= 57);
}
