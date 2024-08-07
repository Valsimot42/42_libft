/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:36:20 by tbolkova          #+#    #+#             */
/*   Updated: 2024/08/01 12:57:22 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

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
