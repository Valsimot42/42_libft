#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str[] = "Hello World!";
	printf("\e[0;32mft_strdup:\e[0;37m %s\n", ft_strdup(str));
	printf("\e[0;31mstrdup:\e[0;37m %s\n", strdup(str));
	return (0);
}