#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char dst[20] = "Hello";
	char src[] = "World!";
	printf("\e[0;32mft_strlcat:\e[0;37m %zu\n", ft_strlcat(dst, src, 20));
	printf("\e[0;32mft_strlcat:\e[0;37m %s\n", dst);
	char dst2[20] = "Hello";
	printf("\e[0;31mstrlcat:\e[0;37m %zu\n", strlcat(dst2, src, 20));
	printf("\e[0;31mstrlcat:\e[0;37m %s\n", dst2);
	return (0);
}