/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:47:00 by matavare          #+#    #+#             */
/*   Updated: 2022/11/23 17:15:33 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	ln;
	int			i;

	i = 0;
	ln = n;
	if (ln < 0)
	{
		write(1, "-", 1);
		ln = -ln;
		i++;
	}
	if (ln > 9)
	{
		i += ft_putnbr(ln / 10);
	}
	ln = ln % 10 + '0';
	i += write(1, &ln, 1);
	return (i);
}
