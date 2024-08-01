#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", ft_isalpha('\0'));
	printf("%d\n", ft_isalpha('!'));
	return (0);
}
