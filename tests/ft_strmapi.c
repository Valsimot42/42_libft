#include <stdio.h>
#include "../inc/libft.h"

char	ft_print(unsigned int i, char c)
{
	printf("%d: %c\n", i, c);
	return (c);
}

int main(void)
{
	char str[] = "Hello World!";
	printf("\e[0;32mft_strmapi:\e[0;37m %s\n", ft_strmapi(str, ft_print));
	return (0);
}