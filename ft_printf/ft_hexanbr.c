#include "libftprintf.h"

void	ft_hexanbr(unsigned int num, char c, int *count)
{
	char	*x;

	if(c == 'x')
		x = "0123456789abcdef";
	else
		x = "0123456789ABCDEF";
	if(num < 16)
	{
		ft_putchar(x[num], count);
	}
	else
	{
		ft_hexanbr(num / 16, c, count);
		ft_hexanbr(num % 16, c, count);
	}
}
