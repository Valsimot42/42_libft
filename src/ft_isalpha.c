/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:33:17 by tbolkova          #+#    #+#             */
/*   Updated: 2024/08/01 12:56:30 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function checks if the character is alphabetic.
 * 
 * @param a The character that is being checked.
 * @return This function returns non-zero value if the character
 * is alphabetic, and a zero if it is not alphabetic.
 */
int	ft_isalpha(int a)
{
	return ((a >= 65 && a <= 90) || (a >= 97 && a <= 122));
}
