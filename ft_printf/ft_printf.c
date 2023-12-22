/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 08:42:24 by ynachat           #+#    #+#             */
/*   Updated: 2023/12/16 08:58:30 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	check(va_list args, char c, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (c == 'x' || c == 'X')
		ft_hexanbr(va_arg(args, unsigned int), c, count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_address(va_arg(args, unsigned long), count);
	}
	else
	{
		ft_putchar(c, count);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		*count;
	int		ct;

	i = 0;
	ct = 0;
	count = &ct;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			check(args, format[i], count);
		}
		else if (format[i] != '%')
			ft_putchar(format[i], count);
		i++;
	}
	va_end(args);
	return (ct);
}
// #include <stdio.h>
// #include <fcntl.h>
// int main()
// {
// 	// int a = 4;
// 	// ft_printf("%p",&a);
// 	// printf("\n");
// 	// printf("%p",&a);

// 	// printf("salam %%y    yalam % %%","aaaa");
// 	//printf("\n");
// 	// int s = ft_printf("salam y  yalsam %s", NULL);
// 	// printf("\n%d\n", s);
// 	// int u = printf("salam y  yalsam %s", NULL);
// 	// printf("\n%d", u);
// 	fclose(stdout);
// 	int res = ft_printf("mohammed");
// 	FILE *f = fopen("txt.txt", "wr");	
// 	fprintf(f, "%d", res);
// }
