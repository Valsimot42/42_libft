#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str[] = "Hello World!";
	char str2[] = "Hello World!";
	ft_memmove(str, str + 8, 6);
	printf("\e[0;32mft_memmove:\e[0;37m %s\n", str);
	memmove(str2, str2 + 8, 6);
	printf("\e[0;31mmemmove:\e[0;37m %s\n", str2);
	return (0);
}