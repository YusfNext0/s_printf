#include "libftprintf.h"

void ft_putchar(char c,int *count)
{
    write(1, &c, 1);
    (*count)++;
}