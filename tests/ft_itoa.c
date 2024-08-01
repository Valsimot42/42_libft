#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	printf("\e[0;32mft_itoa:\n\e[0;37m");
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(-10));
	printf("%s\n", ft_itoa(123456789));
	printf("%s\n", ft_itoa(-123456789));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
}