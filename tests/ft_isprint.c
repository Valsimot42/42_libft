#include <stdio.h>
#include "../inc/libft.h"

void run_test(int c, int expected) {
	int result = ft_isprint(c);
	if(result == expected) {
		printf("\e[0;32m✔\e[0;37m");
	} else {
		printf("\e[0;31m✘\e[0;37m");
	}
}

int main(void)
{
	int c1 = 'g';
	int c2 = 'L';
	int c3 = '7';
	int c4 = ' ';
	int c5 = '\0';
	int c6 = '!';
	int c7 = '0';
	int c8 = EOF;

	printf("ft_isprint tests: ");
	run_test(c1, 1);
	run_test(c2, 1);
	run_test(c3, 1);
	run_test(c4, 1);
	run_test(c5, 0);
	run_test(c6, 1);
	run_test(c7, 1);
	run_test(c8, 0);
	printf("\n");

	return (0);
}