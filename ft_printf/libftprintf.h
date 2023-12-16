#ifndef LIBFTPRINTF
# define LIBFTPRINTF

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int     ft_printf(const char *format, ...);
void    ft_putchar(char c, int *count);
void    ft_putstr(const char *str, int *count);
void    ft_putnbr(int num, int *count);
void    ft_putUnbr(unsigned int num, int *count);
void    ft_hexanbr(unsigned int num, char c,int *count);
void	ft_address(unsigned long num, int *count);

#endif