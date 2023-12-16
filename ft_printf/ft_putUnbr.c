#include "libftprintf.h"

void	ft_putUnbr(unsigned int num, int *count)
{
	if(num < 0)
	{
		ft_putchar('-', count);
		num *= -1;
	}
	if(num <= 9)
	{
		ft_putchar(num + 48, count);
	}else
	{
		ft_putnbr(num / 10, count);
		ft_putnbr(num % 10, count);
	}
}