#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str1[] = "Hello World!";
	char str2[] = "Hello World!";
	char str3[] = "Hello!";
	printf("\e[0;32mft_memcmp: \n\e[0;37m");
	printf("%d\n", ft_memcmp(str1, str2, 5));
	printf("%d\n", ft_memcmp(str1, str2, 10));
	printf("%d\n", ft_memcmp(str1, str3, 5));
	printf("%d\n", ft_memcmp(str1, str3, 10));

	printf("\e[0;31mmemcmp: \n\e[0;37m");
	printf("%d\n", memcmp(str1, str2, 5));
	printf("%d\n", memcmp(str1, str2, 10));
	printf("%d\n", memcmp(str1, str3, 5));
	printf("%d\n", memcmp(str1, str3, 10));
}