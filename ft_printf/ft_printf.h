/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 08:47:37 by ynachat           #+#    #+#             */
/*   Updated: 2023/12/16 10:25:12 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(const char *str, int *count); 
void	ft_putnbr(int num, int *count);
void	ft_putunbr(unsigned int num, int *count);
void	ft_hexanbr(unsigned int num, char c, int *count);
void	ft_address(unsigned long num, int *count);

#endif