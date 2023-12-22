/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 08:41:50 by ynachat           #+#    #+#             */
/*   Updated: 2023/12/16 08:45:05 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_address(unsigned long num, int *count)
{
	char	*x;

	x = "0123456789abcdef";
	if (num < 16)
	{
		ft_putchar(x[num], count);
	}
	else
	{
		ft_address(num / 16, count);
		ft_address(num % 16, count);
	}
}
