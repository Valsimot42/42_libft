#include <stdio.h>
#include "../inc/libft.h"

int main(void)
{
	ft_putnbr_fd(123, 1);
	printf("\n");
	ft_putnbr_fd(-123, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	return (0);
}