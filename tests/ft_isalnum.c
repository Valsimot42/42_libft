#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('\0'));
	printf("%d\n", ft_isalnum('!'));
	return (0);
}