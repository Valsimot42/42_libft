/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:57:13 by tbolkova          #+#    #+#             */
/*   Updated: 2024/08/01 12:57:07 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief This function checks if the character is featured in ASCII table.
 * 
 * @param a The character that is being checked.
 * @return This function returns a character that is found in the ASCII table.
 */
int	ft_isascii(int a)
{
	return (a >= 0 && a <= 127);
}
