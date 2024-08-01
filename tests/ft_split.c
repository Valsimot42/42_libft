#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char str[] = "Hello World!";
	char **arr = ft_split(str, ' ');
	printf("\e[0;32mft_split:\e[0;37m %s\n", arr[0]);
	printf("\e[0;32mft_split:\e[0;37m %s\n", arr[1]);
	printf("\e[0;32mft_split:\e[0;37m %s\n", arr[2]);
}