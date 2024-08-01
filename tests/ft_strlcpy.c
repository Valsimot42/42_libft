#include <stdio.h>
#include <string.h>
#include "../inc/libft.h"

int main(void)
{
	char src[] = "Hello World!";
	char dst[5];
	printf("\e[0;32mft_strlcpy:\e[0;37m %zu\n", ft_strlcpy(dst, src, 5));
	printf("\e[0;32mdst:\e[0;37m %s\n", dst);
	char src2[] = "Hello World!";
	char dst2[5];
	printf("\e[0;31mstrlcpy:\e[0;37m %zu\n", strlcpy(dst2, src2, 5));
	printf("\e[0;31mdst:\e[0;37m %s\n", dst2);
	return (0);
}