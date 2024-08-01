#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str[] = "Hello World!";
	printf("\e[0;32mft_memchr: \n\e[0;37m");
	printf("%s\n", ft_memchr(str, 'W', 5));
	printf("%s\n", ft_memchr(str, 'W', 6));
	printf("%s\n", ft_memchr(str, 'W', 7));
	printf("%s\n", ft_memchr(str, 'W', 8));

	printf("\e[0;31mmemchr: \n\e[0;37m");
	printf("%s\n", memchr(str, 'W', 5));
	printf("%s\n", memchr(str, 'W', 6));
	printf("%s\n", memchr(str, 'W', 7));
	printf("%s\n", memchr(str, 'W', 8));
}