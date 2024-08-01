#include <stdio.h>
#include "../inc/libft.h"

void	ft_print(unsigned int i, char *c)
{
	printf("%d: %c\n", i, *c);
}

int main(void)
{
	char str[] = "Hello World!";
	ft_striteri(str, ft_print);
	return (0);
}