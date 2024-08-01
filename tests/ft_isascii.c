#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('1'));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('\0'));
	printf("%d\n", ft_isascii('!'));
	return (0);
}