/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:04:26 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/26 11:40:22 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief This function allocates the requested memory and
 * returns a pointer to it. The difference in "malloc" and "calloc"
 * is that "malloc" does not set the memory to zero where as "calloc"
 * sets allocated memory to zero.
 * 
 * @param count Number of elements that will be allocated.
 * @param size Size of the elements.
 * @return This function returns a pointer to the allocated memory,
 * or NULL if the request fails.
 */
void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < (count * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *ptr;

// 	ptr = ft_calloc(5, sizeof(char));
// 	if (!ptr)
// 		return (1);
// 	printf("%s\n", ptr);
// 	free(ptr);
// 	return (0);
// }