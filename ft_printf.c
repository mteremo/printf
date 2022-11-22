/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:35:47 by matavare          #+#    #+#             */
/*   Updated: 2022/11/22 18:38:45 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printfconditions(va_list optional_param, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(optional_param, int)));
	if (c == 's')
		return (ft_putstr(va_arg(optional_param, char *)));
	if (c == 'p')
		return (ft_pointer(va_arg(optional_param, long unsigned int)));
	if (c == 'd')
		return (ft_putnbr(va_arg(optional_param, int)));
	if (c == 'i')
		return (ft_putnbr(va_arg(optional_param, int)));
	if (c == 'u')
		return (ft_putnbr_base_uc(va_arg(optional_param, unsigned int), 10));
	if (c == 'x')
		return (ft_printhex_lc(va_arg(optional_param, long unsigned int)));
	if (c == 'X')
		return (ft_putnbr_base_uc(va_arg(optional_param, \
		long unsigned int), 16));
	if (c == '%')
		return (ft_putchar(c));
	return (-1);
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
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			final += printfconditions(optional_param, str[i]);
		}	
		else
			final += write(1, &str[i], 1);
		i++;
	}
	va_end(optional_param);
	return (final);
}

/* int main(void)
{ */
	/* int	i;

	i = 10;
	printf("%d\n", ft_printf("percent sign %%\n"));
	printf("%d\n", ft_printf("char %p\n", 7));
	printf("%d\n", ft_printf("string %s\n", "teresa"));
	printf("%d\n", ft_printf("pointer %p\n", (char *)140));
	printf("%d\n", ft_printf("unsigned %u\n", -1));
	printf("%d\n", ft_printf("lets print a percent sign %%, char %d, \
	a string %s, a negative int %i, decimal %d and a unsigned %u, \
	a pointer %p\n", 'b', "teresa", -2, 9, -1, &i));
	printf("%d\n", ft_printf(" NULL %s NULL ", "NULL"));
	printf("%d\n", ft_printf(" NULL %p NULL ", NULL)); */
	/* printf("%d\n", ft_printf(" %s ", "-"));
	ft_printf(" %s ", "-");
}
 */