#include <stdio.h>
#include <stdlib.h>
#include "../inc/libft.h"

void run_test(char *str, int expected) {
    int result = ft_atoi(str);
    if (result == expected) {
        printf("\e[0;32m✔\e[0;37m"); // Green tick
    } else {
        printf("\e[0;31m✘\e[0;37m"); // Red X
    }
}

int main(void) {
    char *str1 = "-1234";
    char *str2 = "  5  6  7  8";
    char *str3 = "9a9b9c";
    char *str4 = " \t\n\v\f\r  123 ";

    printf("ft_atoi tests: ");
    run_test(str1, atoi(str1));
    run_test(str2, atoi(str2));
    run_test(str3, atoi(str3));
    run_test(str4, atoi(str4));
    printf("\n");

    return 0;
}