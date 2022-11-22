/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:35:47 by matavare          #+#    #+#             */
/*   Updated: 2022/11/21 18:17:51 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printfconditions(va_list optional_param, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(optional_param, char)));
	if (c == 's')
		return (ft_putstr(va_arg(optional_param, char *)));
	if (c == 'p')
		return (ft_pointer(va_arg(optional_param, int *)));
	if (c == 'd')
		return (ft_putnbr(va_arg(optional_param, char)));
	if (c == 'i')
		return (ft_putnbr(va_arg(optional_param, int)));
	if (c == 'u')
		//return (ft_putnbr(va_arg(optional_param, unsigned int)));
	if (c == 'x')
		return (ft_printhex_lc(va_arg(optional_param, int)));
	if (c == 'X')
		return (ft_printhex_uc(va_arg(optional_param, int)));
	if (c == '%')
		return (write(1, '%', 1));
	else
		return (NULL);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			final;
	va_list		optional_param;

	va_start(optional_param, str);
	i = 0;
	final = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == '%')
			final += printfconditions(optional_param, str[i + 1]);
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(optional_param);
	return (final);
}
