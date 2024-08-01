#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str[] = "Hello World!";
	ft_memset(str, 'a', 3);
	printf("\e[0;32mft_memset:\e[0;37m %s\n", str);
	memset(str, 'a', 3);
	printf("\e[0;31mmemset:\e[0;37m %s\n", str);
	return (0);
}