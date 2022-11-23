/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:35:47 by matavare          #+#    #+#             */
/*   Updated: 2022/11/23 16:40:43 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printfconditions(va_list arg, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'p')
		return (ft_pointer(va_arg(arg, long unsigned int)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	if (c == 'u')
		return (ft_nbr_base(va_arg(arg, unsigned int), "0123456789", 10));
	if (c == 'x')
		return (ft_nbr_base(va_arg(arg, unsigned int), "0123456789abcdef", 16));
	if (c == 'X')
		return (ft_nbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF", 16));
	if (c == '%')
		return (ft_putchar(c));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			final;
	va_list		arg;

	va_start(arg, str);
	i = 0;
	final = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			final += printfconditions(arg, str[i]);
		}	
		else
			final += write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (final);
}
