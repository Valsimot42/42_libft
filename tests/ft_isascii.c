#include <stdio.h>
#include "../inc/libft.h"

void run_test(int c, int expected) {
	int result = ft_isascii(c);
	if(result == expected) {
		printf("\e[0;32m✔\e[0;37m");
	} else {
		printf("\e[0;31m✘\e[0;37m");
	}
}

int main(void)
{
	int c1 = 'a';
	int c2 = 'A';
	int c3 = '1';
	int c4 = ' ';
	int c5 = '\0';
	int c6 = '!';
	int c7 = EOF;

	printf("ft_isascii tests: ");
	run_test(c1, 1);
	run_test(c2, 1);
	run_test(c3, 1);
	run_test(c4, 1);
	run_test(c5, 1);
	run_test(c6, 1);
	run_test(c7, 0);
	printf("\n");

	return (0);
}