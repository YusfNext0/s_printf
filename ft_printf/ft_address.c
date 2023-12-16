#include "libftprintf.h"

void	ft_address(unsigned long num, int *count)
{
	char	*x;

	x = "0123456789abcdef";
	if(num < 16)
	{
		ft_putchar(x[num], count);
	}
	else
	{
		ft_address(num / 16, count);
		ft_address(num % 16, count);
	}
}