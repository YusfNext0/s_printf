/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putUnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 08:42:58 by ynachat           #+#    #+#             */
/*   Updated: 2023/12/16 08:54:22 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putunbr(unsigned int num, int *count)
{
	if (num < 0)
	{
		ft_putchar('-', count);
		num *= -1;
	}
	if (num <= 9)
	{
		ft_putchar(num + 48, count);
	}
	else
	{
		ft_putnbr(num / 10, count);
		ft_putnbr(num % 10, count);
	}
}
