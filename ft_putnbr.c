/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:47:00 by matavare          #+#    #+#             */
/*   Updated: 2022/11/22 18:26:56 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	ln;
	int			len;

	len = 0;
	ln = n;
	if (ln < 0)
	{
		write(1, "-", 1);
		ln = -ln;
		len++;
	}
	if (ln > 9)
	{
		len += ft_putnbr(ln / 10);
	}
	ln = ln % 10 + '0';
	len += write(1, &ln, 1);
	return (len);
}

/* int main()
{
	printf(" %d ", ft_putnbr(10));
} */