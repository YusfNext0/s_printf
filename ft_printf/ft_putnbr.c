/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 08:42:45 by ynachat           #+#    #+#             */
/*   Updated: 2023/12/16 08:55:32 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *count)
{
	unsigned int	x;

	if (num < 0)
	{
		ft_putchar('-', count);
		x = num * -1;
	}
	else
	{
		x = num;
	}
	if (x <= 9)
	{
		ft_putchar(x + 48, count);
	}
	else
	{
		ft_putnbr(x / 10, count);
		ft_putnbr(x % 10, count);
	}
}
