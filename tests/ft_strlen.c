#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str[] = "Hello World!";
	printf("\e[0;32mft_strlen:\e[0;37m %zu\n", ft_strlen(str));
	printf("\e[0;31mstrlen:\e[0;37m %zu\n", strlen(str));
	return (0);
}