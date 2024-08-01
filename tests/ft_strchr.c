#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str[] = "Hello World!";
	printf("\e[0;32mft_strchr:\e[0;37m %s\n", ft_strchr(str, 'o'));
	printf("\e[0;31mstrchr:\e[0;37m %s\n", strchr(str, 'o'));
	return (0);
}