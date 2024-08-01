#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('\0'));
	printf("%d\n", ft_isdigit('!'));
	return (0);
}
