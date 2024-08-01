#include <stdio.h>
#include "../inc/libft.h"

 int main(void)
 {
 	char *str1 = "-1234";
 	char *str2 = "  5  6  7  8";
 	char *str3 = "9a9b9c";
 	char *str4 = " \t\n\v\f\r  123 ";
	
 	printf("\e[0;32mft_atoi: \n\e[0;37m");
 	printf("%d\n", ft_atoi(str1));
 	printf("%d\n", ft_atoi(str2));
 	printf("%d\n", ft_atoi(str3));
 	printf("%d\n", ft_atoi(str4));

 	printf("\e[0;31matoi: \n\e[0;37m");
 	printf("%d\n", atoi(str1));
 	printf("%d\n", atoi(str2));
 	printf("%d\n", atoi(str3));
 	printf("%d\n", atoi(str4));
 	return (0);
}