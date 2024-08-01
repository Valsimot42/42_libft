#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	char *ptr;

	ptr = ft_calloc(5, sizeof(char));
	if (!ptr)
		return (1);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}