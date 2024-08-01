#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str1[] = "Hello World!";
	char str2[] = "Helo World!";
	printf("\e[0;32mft_strncmp:\e[0;37m %d\n", ft_strncmp(str1, str2, 5));
	printf("\e[0;31mstrncmp:\e[0;37m %d\n", strncmp(str1, str2, 5));
	return (0);
}