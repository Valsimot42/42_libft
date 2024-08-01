#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('\0'));
	printf("%d\n", ft_isprint('!'));
	return (0);
}