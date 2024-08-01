#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str[] = "Hello World!";
	char str2[] = "Hello World!";
	ft_memcpy(str, str + 6, 6);
	printf("\e[0;32mft_memcpy:\e[0;37m %s\n", str);
	memcpy(str2, str2 + 6, 6);
	printf("\e[0;31mmemcpy:\e[0;37m %s\n", str2);
	return (0);
}