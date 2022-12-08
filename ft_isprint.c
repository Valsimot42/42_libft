/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:03:03 by tbolkova          #+#    #+#             */
/*   Updated: 2022/12/08 13:59:03 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function checks for any printable character.
 * 
 * @param p The character that is being checked.
 * @return This function returns a non-zero character if the
 * test is true, or a zero if it is false.
 */
int	ft_isprint(int p)
{
	return (p >= 32 && p <= 126);
}
