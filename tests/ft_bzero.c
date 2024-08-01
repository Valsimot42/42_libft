#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str[] = "Hello World!";
	ft_bzero(str, 1);
	printf("\e[0;32mft_bzero: %s\n\e[0;37m", str);
	bzero(str, 1);
	printf("\e[0;31mbzero: %s\n\e[0;37m", str);
	return (0);
}